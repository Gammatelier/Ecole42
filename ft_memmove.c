/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:21:12 by dhers             #+#    #+#             */
/*   Updated: 2020/12/01 12:36:08 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	if (!src && !dest)
		return (dest);
	if (temp2 > temp1)
	{
		i = n;
		while (--i < n)
			temp2[i] = temp1[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			temp2[i] = temp1[i];
			i++;
		}
	}
	return (dest);
}
