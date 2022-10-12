/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:39:43 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:39:44 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_lst **lst, t_lst *new)
{
	if (!(*lst))
	{
		(*lst) = new;
		(*lst)->next = NULL;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
