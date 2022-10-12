/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:42:58 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 18:43:00 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1 != '\0')
		dest[i++] = *s1++;
	while (*s2 != '\0')
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_free_s1(char *s1, char const *s2)
{
	char	*tabs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	tabs = (char *)malloc(sizeof(*tabs) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (tabs == 0)
		return (NULL);
	while (s1[i])
	{
		tabs[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tabs[i] = s2[j];
		j++;
		i++;
	}
	tabs[i] = '\0';
	free(s1);
	return (tabs);
}
