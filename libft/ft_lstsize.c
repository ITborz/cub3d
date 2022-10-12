/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:46 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:48 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_lst *lst)
{
	int		count;
	t_lst	*node;

	count = 0;
	if (lst != NULL)
	{
		node = lst;
		while (node != NULL)
		{
			node = node->next;
			count++;
		}
	}
	return (count);
}
