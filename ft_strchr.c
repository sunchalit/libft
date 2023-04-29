/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:28:50 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:12:39 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*searches for the first occurrence of the character c*/
char	*ft_strchr(const char *str, int c)
{
	int				index;
	unsigned char	*s;

	index = 0;
	s = (unsigned char *)str;
	while (s[index] != '\0')
	{
		if (s[index] == (unsigned char) c)
			return ((char *)(s + index));
		index++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + index));
	return (0);
}
