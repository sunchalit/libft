/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:52:04 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:14:21 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*locate a substring in a string*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	l;

	count = 0;
	i = 0;
	while (little[count] != '\0')
		count++;
	if (count == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		l = 0;
		if (big[i] == little[l])
		{
			while (big[i + l] == little[l] && i + l < len)
			{
				if (little[l + 1] == '\0')
					return ((char *)big + i);
				l++;
			}
		}
		i++;
	}
	return (0);
}
