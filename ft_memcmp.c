/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:07:05 by dhers             #+#    #+#             */
/*   Updated: 2020/11/26 20:22:38 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char*)s1;
	temp2 = (unsigned char*)s2;
	i = 0;
	while ((temp1[i] == temp2[i]) && i < n)
		i++;
	if (temp1[i] != temp2[i])
		return (temp2[i] - temp1[i]);
	return (0);
}
