/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:55:11 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 17:55:52 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	while (ft_check(set, s1[start]) == 0 && s1[start] != '\0')
		start++;
printf("start = %d - ", start);
	while (ft_check(set, s1[end - 1]) == 0 && s1[end - 1] != '\0')
		end--;
printf("end = %d\n", end);
    if (!(str = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	while ((start + i) < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	char *result =	ft_strtrim(argv[1], argv[2]);
	printf("origin: %s - result: %s\n", argv[1], result);
	return (0);
}
