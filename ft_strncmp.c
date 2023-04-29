/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:56:31 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:13:01 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*compares at most the first n bytes of str1 and str2*/
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			index;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	index = 0;
	if (n == 0)
		return (0);
	while ((str1[index] != '\0' || str2[index] != '\0') && (index < n - 1))
	{
		if (str1[index] != str2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}
