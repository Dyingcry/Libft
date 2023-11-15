/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:58:29 by thsion            #+#    #+#             */
/*   Updated: 2023/10/21 16:02:24 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*plst;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	plst = *lst;
	while (plst->next != NULL)
		plst = plst->next;
	plst->next = new;
}
