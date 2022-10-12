/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:06 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:42:07 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;

	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (tmp_dst < tmp_src)
		while (len--)
			*tmp_dst++ = *tmp_src++;
	else
	{
		while (len--)
		{
			tmp_dst[len] = tmp_src[len];
		}
	}
	return (dst);
}
