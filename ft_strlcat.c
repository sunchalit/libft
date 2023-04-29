/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:50:54 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:12:27 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*function appends the NUL-terminated string src to the end of dst.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] != '\0' && d < size)
		d++;
	while (src[s] != '\0' && (d + s + 1) < size)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d < size)
		dst[d + s] = '\0';
	return (d + ft_strlen((char *)src));
}
