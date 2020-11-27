/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 00:00:30 by dhers             #+#    #+#             */
/*   Updated: 2020/11/28 00:45:28 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	(void)(*del);
	temp = NULL;
	while (lst->next != NULL)
	{
		result = ft_lstnew((*f)(lst));
		if (temp != NULL)
			temp->next = result;
		temp = result;
		lst = lst->next;
	}
	return (result);
}
