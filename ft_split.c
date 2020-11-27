/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:02:14 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 17:56:48 by dhers            ###   ########.fr       */
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
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int		ft_word_size(char const *s, int n, char c)
{
	int	size;

	size = 0;
	while (s[n] != c && s[n] != '\0')
	{
		size++;
		n++;
	}
	return (size);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		i;
	int		j;
	int		k;

	count = ft_word_count(s, c);
	if (!(result = malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		k = 0;
		result[i] = malloc(sizeof(char) * (ft_word_size(s, j, c) + 1));
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
			result[i][k++] = s[j++];
		result[i][k] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}
