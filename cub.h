/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <bkristen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:01:14 by bkristen          #+#    #+#             */
/*   Updated: 2022/10/12 12:21:34 by bkristen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <math.h>
# include "mlx/mlx.h"
# include "libft/libft.h"

# define BUF_SIZE 		1
# define KEY_PRESS 		2
# define KEY_RELEASE 	3
# define KEY_EXIT		17
# define SHEIGHT		720
# define SWIGHT			1280
# define TEXW			1024
# define TEXH			1024
# define W 				13
# define A 				0
# define D 				2
# define S 				1
# define ESC 			53
# define UP				126
# define DOWN			125
# define LEFT			123
# define RIGHT			124

typedef struct s_img
{
	void	*img;
	int		*data;
	int		size;
	int		bpp;
	int		endian;
	int		h;
	int		w;
}t_img;

typedef struct s_texture
{
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	int		color_roof[3];
	int		color_floor[3];
}t_texture;

typedef struct s_cub
{
	void		*mlx;
	void		*win;
	char		**file;
	char		**map;
	double		pos_x;
	double		pos_y;
	double		dir_vector_x;
	double		dir_vector_y;
	double		plane_x;
	double		plane_y;
	double		move_speed;
	double		rot_speed;
	int			buf[SHEIGHT][SWIGHT];
	int			**texture;
	int			map_x;
	int			map_y;
	double		camera_x;
	double		ray_dir_x;
	double		ray_dir_y;
	double		side_dist_x;
	double		side_dist_y;
	double		delta_dist_x;
	double		delta_dist_y;
	double		perp_wall;
	double		wall_x;
	int			step_x;
	int			step_y;
	int			hit;
	int			forward;
	int			back;
	int			left;
	int			left2;
	int			right;
	int			right2;
	int			side;
	int			line_h;
	int			draw_start;
	int			draw_end;
	int			tex_num;
	int			tex_x;
	int			tex_y;
	double		step;
	double		tex_pos;
	int			text;
	t_img		img;
	t_texture	textur;
}t_cub;

void	my_mlx_pixel_put(int y, int x, t_cub *cub, unsigned int color);
void	init_pos(t_cub *cub);
int		key_hook_move(t_cub *cub);
void	init(t_cub *cub);
int		calc_and_save(t_cub *cub);
void	hit(t_cub *cub);
void	draw_line(t_cub *cub);
void	step(t_cub *cub);
void	load_texture(t_cub *cub);
void	load_img(t_cub *cub, int *texture, char *path, t_img *img);
int		main_loop(t_cub *cub);
int		init_texture(t_cub *cub);
void	if_forward(t_cub *cub);
void	if_back(t_cub *cub);
void	if_left(t_cub *cub);
void	if_right(t_cub *cub);
int		key_hook(int keycode, t_cub *cub);
int		key_release(int keycode, t_cub *cub);
void	roof(t_cub *cub);
void	create_image(t_cub *cub);
void	parser(t_cub *data, char *file);
void	checking_the_extension(char *file);
void	print_error(char *s1, char *s2, char *s3, char *s4);
void	checking_card_information(char **split_file, int fd);
void	reading_a_file(char ***split_file, int fd, char *file);
void	recording_file_info(char **split_file, t_cub *cub);
void	check_error(int rd);
int		create_trgb(int r, int g, int b);
void	step(t_cub *cub);
void	right(t_cub *cub);
void	left(t_cub *cub);

#endif