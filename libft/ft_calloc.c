/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:38:25 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:38:27 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	size_t			total;
	unsigned int	i;

	total = size * count;
	dst = malloc(sizeof(char) * total);
	if (!dst)
		return (NULL);
	i = 0;
	while (total--)
	{	
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
