/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:12:08 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/16 12:35:01 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*converts lowercase to uppercase*/
int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
		return (ch);
	}
	else
	{
		return (ch);
	}
}
