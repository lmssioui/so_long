/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:13:51 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/17 10:39:55 by abouyata         ###   ########.fr       */
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
			"./image/player/right.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[0]);
	data->right_sprites[1] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/right01.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[1]);
	data->right_sprites[2] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/right02.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[2]);
	data->right_sprites[3] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/right03.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[3]);
	data->left_sprites[0] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/left.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[0]);
	data->left_sprites[1] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/left01.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[1]);
	data->left_sprites[2] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/left02.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->right_sprites[2]);
	data->left_sprites[3] = mlx_xpm_file_to_image(data->mlx,
			"./image/player/left03.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->left_sprites[3]);
}

void load_pfwc(t_data *data)
{
    data->players = mlx_xpm_file_to_image(data->mlx,
			"./image/player/player0.xpm", &data->img_width, &data->img_height);
	check_loading_problems(data->players);
    data->floor = mlx_xpm_file_to_image(data->mlx,
            "./image/f_w_c/floor.xpm", &data->img_width, &data->img_height);
    check_loading_problems(data->floor);
    data->walls = mlx_xpm_file_to_image(data->mlx,
            "./image/f_w_c/wall.xpm", &data->img_width, &data->img_height);
    check_loading_problems(data->walls);
    data->collectible = mlx_xpm_file_to_image(data->mlx,
            "./image/f_w_c/clc.xpm", &data->img_width, &data->img_height);
    check_loading_problems(data->collectible);
    data->door[0] = mlx_xpm_file_to_image(data->mlx,
            "./image/door/door.xpm", &data->img_width, &data->img_height);
    check_loading_problems(data->door[0]);
    data->door[1] = mlx_xpm_file_to_image(data->mlx,
            "./image/door/door_open.xpm", &data->img_width, &data->img_height);
    check_loading_problems(data->door[1]);
}