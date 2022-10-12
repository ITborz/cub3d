/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:43:25 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:43:26 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = ft_strlen(source);
	while (i < n)
	{
		if (i < lsrc)
		{
			destination[i] = source[i];
			i++;
		}
		else
		{
			destination[i] = '\0';
			i++;
		}
	}
	return (destination);
}
