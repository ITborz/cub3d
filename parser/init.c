/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:27:49 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/11 14:27:58 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

void	init(t_cub *cub)
{
	init_pos(cub);
	cub->move_speed = 0.05;
	cub->rot_speed = 0.05;
	cub->back = 0;
	cub->forward = 0;
	cub->left = 0;
	cub->right = 0;
}

void	checking_the_extension(char *file)
{
	int	i;

	i = (ft_strlen(file)) - 4;
	if (ft_strncmp(".cub\0", file + i, 4))
	{
		print_error("Incorrect file extension: ", file, "\n", NULL);
		exit (EXIT_FAILURE);
	}
}
