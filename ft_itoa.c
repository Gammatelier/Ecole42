/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:33:15 by dhers             #+#    #+#             */
/*   Updated: 2020/11/26 18:01:33 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(long nbr, int sign)
{
	int digit;

	if (nbr == 0)
		return (1);
	digit = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		digit++;
	}
	if (sign < 0)
		digit++;
	return (digit);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		digit;
	long	nbr;

	sign = 1;
	if (n < 0)
		sign = -1;
	nbr = sign * (long)n;
	digit = ft_digit(nbr, sign);
	if (!(str = malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	str[digit] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--digit] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign < 0)
		str[--digit] = '-';
	return (str);
}
