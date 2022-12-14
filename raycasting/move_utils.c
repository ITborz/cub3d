/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:06:54 by iugolin           #+#    #+#             */
/*   Updated: 2022/10/11 14:24:02 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

void	if_forward(t_cub *cub)
{
	if (cub->map[(int)(cub->pos_x + cub->dir_vector_x \
		* cub->move_speed)][(int)(cub->pos_x)])
		cub->pos_x += cub->dir_vector_x * cub->move_speed;
	if (cub->map[(int)(cub->pos_x)][(int)(cub->pos_y \
		+ cub->dir_vector_y * cub->move_speed)])
		cub->pos_y += cub->dir_vector_y * cub->move_speed;
}

void	if_back(t_cub *cub)
{
	if (cub->map[(int)(cub->pos_x + cub->dir_vector_x \
		* cub->move_speed)][(int)(cub->pos_y)])
		cub->pos_x -= cub->dir_vector_x * cub->move_speed;
	if (cub->map[(int)(cub->pos_x)][(int)(cub->pos_y \
		- cub->dir_vector_y * cub->move_speed)])
		cub->pos_y -= cub->dir_vector_y * cub->move_speed;
}

void	left(t_cub *cub)
{
	if (cub->map[(int)(cub->pos_x + cub->dir_vector_y * \
		(cub->move_speed))][(int)cub->pos_y] == '0')
		cub->pos_x += cub->dir_vector_y * cub->move_speed;
	if (cub->map[(int)cub->pos_x][(int)(cub->pos_y \
	- cub->dir_vector_x * (cub->move_speed))] == '0')
		cub->pos_y -= cub->dir_vector_x * cub->move_speed;
}

void	if_left(t_cub *cub)
{
	double	old_direction_x;
	double	old_plane_x;

	old_direction_x = cub->dir_vector_x;
	cub->dir_vector_x = cub->dir_vector_x * cos(cub->rot_speed) \
		- cub->dir_vector_y * sin(cub->rot_speed);
	cub->dir_vector_y = old_direction_x * sin(cub->rot_speed) \
		+ cub->dir_vector_y * cos(cub->rot_speed);
	old_plane_x = cub->plane_x;
	cub->plane_x = cub->plane_x * cos(cub->rot_speed) \
		- cub->plane_y * sin(cub->rot_speed);
	cub->plane_y = old_plane_x * sin(cub->rot_speed) \
		+ cub->plane_y * cos(cub->rot_speed);
}

void	if_right(t_cub *cub)
{
	double	old_direction_x;
	double	old_plane_x;

	old_direction_x = cub->dir_vector_x;
	cub->dir_vector_x = cub->dir_vector_x * cos(-cub->rot_speed) \
		- cub->dir_vector_y * sin(-cub->rot_speed);
	cub->dir_vector_y = old_direction_x * sin(-cub->rot_speed) \
		+ cub->dir_vector_y * cos(-cub->rot_speed);
	old_plane_x = cub->plane_x;
	cub->plane_x = cub->plane_x * cos(-cub->rot_speed) \
		- cub->plane_y * sin(-cub->rot_speed);
	cub->plane_y = old_plane_x * sin(-cub->rot_speed) \
		+ cub->plane_y * cos(-cub->rot_speed);
}
