/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:55:23 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 11:54:41 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	all_collectible(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->w_h[1])
	{
		j = 0;
		while (j < data->w_h[0])
		{
			if (data->map[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_enemy(t_data *data, int x1, int y1)
{
	int	x;
	int	y;

	x = x1 / 48;
	y = y1 / 48;
	if (x >= 0 && y >= 0 && x < data->w_h[1] && y < data->w_h[0]
		&& data->map[x][y] == 'N')
	{
		return (1);
	}
	return (0);
}
