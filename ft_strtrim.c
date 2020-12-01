/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:55:11 by dhers             #+#    #+#             */
/*   Updated: 2020/11/28 00:47:36 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != '\0' && s1[start] != '\0')
		start++;
	while (end > 0 && ft_strchr(set, s1[end - 1]) != '\0' && s1[end - 1] != '\0')
		end--;
	if (start < end)
		str = ft_substr(s1, start, (end - start));
	else
		str = ft_substr(s1, 0, 0);
	return (str);
}
