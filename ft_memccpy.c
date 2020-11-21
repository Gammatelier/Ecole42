/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:07:21 by dhers             #+#    #+#             */
/*   Updated: 2020/11/20 10:15:23 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	i = 0;
	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	while (i < n)
	{
		*temp2[i] = *temp1[i];
		if (temp1[i] == c)
			return (dest[i + 1]);
		i++;
	}
	return (NULL);
}
