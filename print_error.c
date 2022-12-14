/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:34:03 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/12 12:06:15 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	print_error(char *s1, char *s2, char *s3, char *s4)
{
	ft_putstr_fd("\033[1;31m", 1);
	ft_putstr_fd("Error", 2);
	ft_putstr_fd("\n\033[0m", 1);
	ft_putstr_fd("\033[3;31m", 1);
	if (s1)
		ft_putstr_fd(s1, 2);
	if (s2)
		ft_putstr_fd(s2, 2);
	if (s3)
		ft_putstr_fd(s3, 2);
	if (s4)
		ft_putstr_fd(s4, 2);
	ft_putstr_fd("\033[0m", 1);
	exit(EXIT_FAILURE);
}
