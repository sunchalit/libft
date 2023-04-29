/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:12:05 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:10:49 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	index = 0;
	while (n > 0)
	{
		ptr[index] = 0;
		index++;
		n--;
	}
}
