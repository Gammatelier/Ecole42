/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:21:12 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 18:33:27 by dhers            ###   ########.fr       */
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
	if (temp2 > temp1)
	{
		i = n - 1;
		while (i < n)
		{
			temp2[i] = temp1[i];
			i--;
		}
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
