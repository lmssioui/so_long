/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:13:51 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 11:57:36 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_loading_problems(void *img)
{
	if (img == NULL)
	{
		write(2, "Invalid image", 14);
		exit(1);
	}
}

void	load_sprites(t_data *data)
{
	data->right_sprites[0] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/right.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[0]);
	data->right_sprites[1] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/right01.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[1]);
	data->right_sprites[2] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/right02.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[2]);
	data->right_sprites[3] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/right03.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[3]);
	data->left_sprites[0] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/left.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[0]);
	data->left_sprites[1] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/left01.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[1]);
	data->left_sprites[2] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/left02.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[2]);
	data->left_sprites[3] = mlx_xpm_file_to_image(data->mlx,
			"textures/player/left03.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[3]);
}

void	load_pfwc(t_data *data)
{
	data->enemy  = mlx_xpm_file_to_image(data->mlx,
			"textures/enemy.xpm",  &data->img_width, &data->img_height);
	check_loading_problems(data->enemy);
	data->players = mlx_xpm_file_to_image(data->mlx,
			"textures/player/player0.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->players);
	data->floor = mlx_xpm_file_to_image(data->mlx, "textures/f_w_c/floor.xpm",
			&data->img_width, &data->img_height);
	check_loading_problems(data->floor);
	data->walls = mlx_xpm_file_to_image(data->mlx, "textures/f_w_c/wall.xpm",
			&data->img_width, &data->img_height);
	check_loading_problems(data->walls);
	data->collectible = mlx_xpm_file_to_image(data->mlx,
			"textures/f_w_c/clc.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->collectible);
	data->door = mlx_xpm_file_to_image(data->mlx, "textures/door/door.xpm",
			&data->img_width, &data->img_height);
	check_loading_problems(data->door);
	data->door_open = mlx_xpm_file_to_image(data->mlx,
			"textures/door/door_open.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->door_open);
}
