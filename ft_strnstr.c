/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:45 by dhers             #+#    #+#             */
/*   Updated: 2020/11/27 00:29:36 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (little[0] == big[i])
		{
			j = 0;
			while (little[j] == big[i + j] && little[j] != '\0')
				j++;
			if (little[j] == '\0' && (i + j) < len)
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
