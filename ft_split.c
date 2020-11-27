/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:02:14 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 22:45:21 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (count - 1);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	int		len;
	int		pos;
	int		i;
	int		temp;

	pos = 0;
	i = 0;
	len = ft_word_count(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	while (i < len)
	{
		while (s[pos] == c && s[pos] != '\0')
			pos++;
		temp = pos;
		while (s[pos] != c && s[pos] != '\0')
			pos++;
		result[i] = ft_substr(s, temp, pos - temp);
		i++;
		pos++;
	}
	result[i] = 0;
	return (result);
}
