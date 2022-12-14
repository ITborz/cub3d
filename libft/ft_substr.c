/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:43:46 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:43:47 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			size_str;
	char			*tmp_str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	size_str = ft_strlen(s);
	if (len > size_str)
		len = size_str;
	if (size_str < start)
	{
		tmp_str = (char *)malloc(sizeof(char) * size_str + 1);
		if (!tmp_str)
			return (NULL);
		tmp_str[0] = 0;
		return (tmp_str);
	}
	tmp_str = (char *)malloc(sizeof(char) * len + 1);
	if (!tmp_str)
		return (NULL);
	while (len--)
		tmp_str[i++] = s[start++];
	tmp_str[i] = '\0';
	return (tmp_str);
}
