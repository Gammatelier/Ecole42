/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:02:14 by dhers             #+#    #+#             */
/*   Updated: 2020/12/04 13:05:00 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int		count;
	char    *str;

	count = 0;
	str = (char*)s;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static char		**ft_free_all(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	int		pos;
	int		i;
	int		temp;

	if (!s)
		return (NULL);
	pos = 0;
	i = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (i < ft_count(s, c))
	{
		while (s[pos] == c && s[pos] != '\0')
			pos++;
		temp = pos;
		while (s[pos] != c && s[pos] != '\0')
			pos++;
		if (!(result[i] = ft_substr(s, temp, pos - temp)))
			return (ft_free_all(result, i - 1));
		i++;
		pos++;
	}
	result[i] = 0;
	return (result);
}
