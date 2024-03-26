/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:42:03 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/26 07:44:00 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	flood_fill(t_data *data, int x, int y)
{
	if (x < 0 || y < 0 || x >= data->w_h[1] || y >= data->w_h[0])
		return ;
	if (data->map[x][y] == 'P' || data->map[x][y] == 'E'
		|| data->map[x][y] == 'C' || data->map[x][y] == '0')
	{
		data->map[x][y] = 'V';
		flood_fill(data, x + 1, y);
		flood_fill(data, x, y + 1);
		flood_fill(data, x - 1, y);
		flood_fill(data, x, y - 1);
	}
}

int	check_map(t_data *data)

{
	int	i;
	int	j;

	i = 0;
	while (i < data->w_h[1])
	{
		j = 0;
		while (j < data->w_h[0])
		{
			if (data->map[i][j] == 'C' || data->map[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_map(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->w_h[1])
	{
		if (data->map[i])
			free(data->map[i]);
		i++;
	}
	free(data->map);
}

void	validate_path(t_data *data)
{
	flood_fill(data, data->player_position[0] / 48, data->player_position[1]
		/ 48);
	if (!check_map(data))
	{
		ft_printf("No way for the exit or all collects");
		free_map(data);
		exit(1);
	}
}
