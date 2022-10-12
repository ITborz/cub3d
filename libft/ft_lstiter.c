/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:26 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:28 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_lst *lst, void (*f)(void *))
{
	t_lst	*f_element;

	f_element = lst;
	if (f != NULL)
	{
		while (f_element != NULL)
		{
			f(f_element->content);
			f_element = f_element->next;
		}
	}
}
