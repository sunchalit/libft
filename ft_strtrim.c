/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:19:37 by cnarkcha          #+#    #+#             */
/*   Updated: 2023/04/26 17:08:42 by cnarkcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*trim str specified by set*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*trim_str;

	start = 0;
	end = ft_strlen(s1);
	trim_str = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim_str)
		return (NULL);
	ft_strlcpy(trim_str, &s1[start], (end - start + 1));
	return (trim_str);
}
