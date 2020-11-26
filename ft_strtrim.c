/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:34:41 by dhers             #+#    #+#             */
/*   Updated: 2020/11/26 21:58:14 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1 - 1);
	if (!(str = malloc(sizeof(char) * (end + 1))))
		return (NULL);
	while (ft_strchr(set, s1[start]) == 0 && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end]) == 0 && s1[end] != '\0')
		end--;
	while (start <= end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
