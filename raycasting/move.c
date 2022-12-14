/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:07:11 by iugolin           #+#    #+#             */
/*   Updated: 2022/10/11 17:34:44 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

int	key_hook_move(t_cub *cub)
{
	if (cub->forward == 1)
	{
		if (cub->map[(int)(cub->pos_x + cub->dir_vector_x * cub->move_speed)]
			[(int)(cub->pos_y + cub->dir_vector_y * cub->move_speed)] == '0')
			if_forward(cub);
	}
	if (cub->back == 1)
	{
		if (cub->map[(int)(cub->pos_x - cub->dir_vector_x * cub->move_speed)]
			[(int)(cub->pos_y - cub->dir_vector_y * cub->move_speed)] == '0')
			if_back(cub);
	}
	if (cub->left2 == 1)
		left(cub);
	if (cub->right2 == 1)
		right(cub);
	if (cub->left == 1)
		if_left(cub);
	if (cub->right == 1)
		if_right(cub);
	return (0);
}

void	right(t_cub *cub)
{
	if (cub->map[(int)(cub->pos_x - cub->dir_vector_y * \
		(cub->move_speed))][(int)cub->pos_y] == '0')
		cub->pos_x -= cub->dir_vector_y * cub->move_speed;
	if (cub->map[(int)cub->pos_x][(int)(cub->pos_y \
	+ cub->dir_vector_x * (cub->move_speed))] == '0')
		cub->pos_y += cub->dir_vector_x * cub->move_speed;
}

int	key_hook(int keycode, t_cub *cub)
{
	if (keycode == W)
		cub->forward = 1;
	else if (keycode == S)
		cub->back = 1;
	else if (keycode == LEFT)
		cub->left = 1;
	else if (keycode == RIGHT)
		cub->right = 1;
	else if (keycode == A)
		cub->right2 = 1;
	else if (keycode == D)
		cub->left2 = 1;
	else if (keycode == ESC)
		exit(0);
	return (0);
}

int	key_release(int keycode, t_cub *cub)
{
	if (keycode == W)
		cub->forward = 0;
	else if (keycode == S)
		cub->back = 0;
	else if (keycode == LEFT)
		cub->left = 0;
	else if (keycode == RIGHT)
		cub->right = 0;
	else if (keycode == A)
		cub->right2 = 0;
	else if (keycode == D)
		cub->left2 = 0;
	return (0);
}

int	main_loop(t_cub *cub)
{
	roof(cub);
	calc_and_save(cub);
	create_image(cub);
	return (0);
}
