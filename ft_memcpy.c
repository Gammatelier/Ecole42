/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:46:02 by dhers             #+#    #+#             */
/*   Updated: 2020/11/26 18:57:48 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned	char	*temp1;
	unsigned	char	*temp2;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	while (n > 0)
	{
		*temp2 = *temp1;
		temp1++;
		temp2++;
		n--;
	}
	return (dest);
}
