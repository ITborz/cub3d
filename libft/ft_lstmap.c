/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:36 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:37 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *))
{
	t_lst	*root;
	t_lst	*node;

	if (!lst)
		return (NULL);
	root = NULL;
	while (lst)
	{
		node = create_node(f(lst->content));
		if (!node)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		push_back(&root, node);
		lst = lst->next;
	}
	return (root);
}
