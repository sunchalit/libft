/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:39:52 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/22 14:18:40 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*print charracter*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
