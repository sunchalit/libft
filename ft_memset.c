/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:47:25 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:10:25 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*copies c to the first n character of str pointed to*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				index;

	ptr = (unsigned char *)s;
	index = 0;
	while (n > 0)
	{
		ptr[index] = (unsigned int)c;
		index++;
		n--;
	}
	return (s);
}
