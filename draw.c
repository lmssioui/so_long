/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:14:07 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 09:47:34 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_sprite(t_data *img_data)
{
	if (img_data->left_right == 0)
		mlx_put_image_to_window(img_data->mlx, img_data->win,
			img_data->right_sprites[img_data->current_frame[0]],
			img_data->player_position[1], img_data->player_position[0]);
	else if (img_data->left_right == 1)
		mlx_put_image_to_window(img_data->mlx, img_data->win,
			img_data->left_sprites[img_data->current_frame[1]],
			img_data->player_position[1], img_data->player_position[0]);
}

void	draw_elem(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->win, data->floor, j * 48, i * 48);
	if (data->map[i][j] == '1')
		mlx_put_image_to_window(data->mlx, data->win, data->walls, j * 48, i
			* 48);
	else if (data->map[i][j] == 'N')
		mlx_put_image_to_window(data->mlx, data->win, data->enemy, j * 48, i
			* 48);
	else if (data->map[i][j] == 'C')
		mlx_put_image_to_window(data->mlx, data->win, data->collectible, j * 48,
			i * 48);
	else if (data->map[i][j] == 'E')
	{
		mlx_put_image_to_window(data->mlx, data->win, data->door, j * 48, i
			* 48);
		if (all_collectible(data))
			mlx_put_image_to_window(data->mlx, data->win, data->door_open, j
				* 48, i * 48);
	}
}

void	draw_game(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	mlx_clear_window(data->mlx, data->win);
	while (i < data->w_h[1])
	{
		j = 0;
		while (j < data->w_h[0])
		{
			draw_elem(data, i, j);
			j++;
		}
		i++;
	}
	draw_sprite(data);
}
