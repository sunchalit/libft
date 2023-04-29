/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixheader_ft_memmove.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:49:35 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:11:32 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copies n characters from str2 to str1, but for overlapping memory blocks*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		index = n;
		while (n > 0)
		{
			index--;
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			n--;
		}
	}
	else
	{
		index = 0;
		while (index < n)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dest);
}
