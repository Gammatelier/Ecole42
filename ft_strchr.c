/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:33:57 by dhers             #+#    #+#             */
/*   Updated: 2020/11/23 16:48:38 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (const char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str[i]);
		i++;
	}
	if (str[i] == c)
		return (str[i]);
	return (NULL);
}
