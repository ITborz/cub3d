/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:31 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:32 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstlast(t_lst *lst)
{
	t_lst	*f_element;

	if (lst == NULL)
		return (NULL);
	f_element = lst;
	while (f_element->next != NULL)
		f_element = f_element->next;
	return (f_element);
}
