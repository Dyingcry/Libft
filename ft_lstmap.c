/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:17:00 by thsion            #+#    #+#             */
/*   Updated: 2023/10/21 15:58:53 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*start;

	if (!lst)
		return (NULL);
	node = ft_lstnew((*f)(lst->content));
	if (!node)
		return (NULL);
	start = node;
	lst = lst->next;
	while (lst != NULL)
	{
		node->next = ft_lstnew((*f)(lst->content));
		if (!node)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		lst = lst->next;
		node = node->next;
	}
	return (start);
}
