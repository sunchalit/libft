/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:00:24 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/26 17:05:39 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Applies the function f to each character of s to create a new string*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	int				length;
	char			*str;

	index = 0;
	length = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[length] != '\0')
		length++;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
