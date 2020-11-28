/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 23:44:18 by dhers             #+#    #+#             */
/*   Updated: 2020/11/28 15:45:30 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	if (current == NULL || del == NULL)
		return;
	while (current->next != NULL)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	ft_lstdelone(current, del);
	*lst = NULL;
}
