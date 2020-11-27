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

static int	ft_check(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
		i++;
	end = i;
	i = 0;
	while (ft_check(set, s1[start]) == 1 && s1[start] != '\0')
		start++;
	while (ft_check(set, s1[end - 1]) == 1 && s1[end - 1] != '\0')
		end--;
	if (!(str = malloc(sizeof(char) * ((start > end) ? 1 : (end - start + 1)))))
		return (NULL);
	while ((start + i) < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
