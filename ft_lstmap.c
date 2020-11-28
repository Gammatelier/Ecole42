/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 00:00:30 by dhers             #+#    #+#             */
/*   Updated: 2020/11/28 16:39:39 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*result;

	first = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (!(result = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&first, result);
		lst = lst->next;
	}
	return (first);
}
