/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:49:40 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:11:46 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*searches for the first occurrence of the character c in the first n byte*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				index;
	unsigned char		*s;

	index = 0;
	s = (unsigned char *)str;
	while (index < n)
	{
		if ((unsigned char)c == s[index])
			return ((void *)(str + index));
		index++;
	}
	return (NULL);
}
