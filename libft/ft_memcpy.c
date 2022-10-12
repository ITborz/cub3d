/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:02 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:42:03 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;

	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
