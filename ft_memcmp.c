/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:07:05 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 17:57:43 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (temp1[i] == temp2[i] && i < n - 1  && temp1[i] != '\0')
		i++;
	return (temp1[i] - temp2[i]);
}
