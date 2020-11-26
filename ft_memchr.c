/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:11:11 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 00:22:23 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n && src[i] != '\0')
	{
		if (src[i] == (unsigned char)c)
			return ((void *)s + i * sizeof(char));
		i++;
	}
	return (NULL);
}
