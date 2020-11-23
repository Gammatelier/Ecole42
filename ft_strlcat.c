/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:10:10 by dhers             #+#    #+#             */
/*   Updated: 2020/11/23 17:28:14 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	else
	{
		i = ft_strlen(dest);
		while (src[j] != '\0' && j < size - i - 1)
		{
			dest[j + i] = src[j];
			j++;
		}
		dest[j + i] = '\0';
		return (i + ft_strlen(src));
	}
	return (0);
}
