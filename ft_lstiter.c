/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 23:57:52 by dhers             #+#    #+#             */
/*   Updated: 2020/11/28 15:47:34 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return;
	while (lst->next != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	(*f)(lst->content);
}
