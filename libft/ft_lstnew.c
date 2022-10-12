/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:42 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:43 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*create_node(char *content)
{
	t_lst	*new_lst;

	new_lst = (t_lst *)malloc(sizeof(t_lst));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->type = 0;
	new_lst->next = NULL;
	return (new_lst);
}
