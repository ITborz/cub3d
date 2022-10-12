/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:08:08 by iugolin           #+#    #+#             */
/*   Updated: 2022/10/11 17:36:46 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

void	load_texture(t_cub *cub)
{
	t_img	img;

	load_img(cub, cub->texture[0], cub->textur.north, &img);
	load_img(cub, cub->texture[1], cub->textur.south, &img);
	load_img(cub, cub->texture[2], cub->textur.west, &img);
	load_img(cub, cub->texture[3], cub->textur.east, &img);
}

void	load_img(t_cub *cub, int *texture, char *path, t_img *img)
{
	int	x;
	int	y;

	y = 0;
	img->img = mlx_xpm_file_to_image(cub->mlx, path, &img->w, &img->h);
	img->data = (int *)mlx_get_data_addr(img->img, \
		&img->bpp, &img->size, &img->endian);
	while (y < img->h)
	{
		x = 0;
		while (x < img->w)
		{
			texture[img->w * y + x] = img->data[img->w * y + x];
			x++;
		}
		y++;
	}
	mlx_destroy_image(cub->mlx, img->img);
}

void	create_image(t_cub *cub)
{
	int	x;
	int	y;

	y = 0;
	while (y < SHEIGHT)
	{
		x = 0;
		while (x < SWIGHT)
		{
			cub->img.data[y * SWIGHT + x] = cub->buf[y][x];
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(cub->mlx, cub->win, cub->img.img, 0, 0);
}

void	roof(t_cub *cub)
{
	int	x;
	int	y;
	int	color;
	int	color2;

	x = 0;
	color = create_trgb(cub->textur.color_roof[0], \
		cub->textur.color_roof[1], cub->textur.color_roof[2]);
	color2 = create_trgb(cub->textur.color_floor[0], \
		cub->textur.color_floor[2], cub->textur.color_floor[2]);
	while (x < SWIGHT)
	{
		y = 0;
		while (y < SHEIGHT)
		{
			cub->buf[y][x] = color;
			cub->buf[SHEIGHT - y - 1][x] = color2;
			y++;
		}
		x++;
	}
}

int	init_texture(t_cub *cub)
{
	int	i;
	int	j;

	i = 0;
	cub->texture = (int **)malloc(sizeof(int *) * 4);
	if (cub->texture == NULL)
		return (-1);
	while (i < 4)
	{
		cub->texture[i] = (int *)malloc(sizeof(int) * (TEXH * TEXW));
		if (cub->texture[i] == NULL)
			return (-1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < TEXH * TEXW)
			cub->texture[i][j++] = 0;
		i++;
	}
	return (0);
}
