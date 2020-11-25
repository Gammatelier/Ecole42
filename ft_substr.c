/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:20:44 by dhers             #+#    #+#             */
/*   Updated: 2020/11/24 17:55:01 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (start-- > 0)
		*s++;
	while (len-- > 0 && *s != '\0')
		*str++ = *s++;
	*str = '\0';
	return (str);
}
