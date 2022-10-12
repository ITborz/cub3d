/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:39:49 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:39:50 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_lst **lst, void (*del)(void*))
{
	t_lst	*node;

	if (*lst != NULL && del != NULL)
	{
		node = *lst;
		while (node)
		{
			ft_lstdelone(node, del);
			node = node->next;
		}
		*lst = NULL;
	}
}
