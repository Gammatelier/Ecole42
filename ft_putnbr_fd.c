/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:32:10 by dhers             #+#    #+#             */
/*   Updated: 2020/12/01 21:48:10 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
		ft_putchar_fd((nbr + '0'), fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}
