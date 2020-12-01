/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:20:44 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 17:54:08 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (len > 0 && s[i] != '\0')
	{
		str[j] = s[i];
		len--;
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
