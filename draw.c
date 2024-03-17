/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:14:07 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/17 12:20:48 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void   draw(t_data *data, int i, int j)
{
    mlx_put_image_to_window(data->mlx, data->win, data->floor, j * 48, i * 48);
    if ( data->map[i][j] == '1')
        mlx_put_image_to_window(data->mlx, data->win, data->walls, j * 48, i * 48);
    else if (data->map[i][j] == 'C')
        mlx_put_image_to_window(data->mlx, data->win, data->collectible, j * 48, i * 48);
    else if (data->map[i][j] == 'E')
    {
        mlx_put_image_to_window(data->mlx, data->win, data->door[0], j * 48, i * 48);
        if (all_collectible(data))
            mlx_put_image_to_window(data->mlx, data->win, data->door[1], i * 48, j * 48);
    }
}

void    draw_player(t_data *data)
{
   int  i;
   int  j;

   i = 0;
   while (i < data->w_h[1])
   {
    j = 0;
    while(j < data->w_h[0])
    {
        if (data->map[i][j] == 'P')
            mlx_put_image_to_window(data->mlx, data->win, data->players, j * 48, i * 48);
        j++;
    }
    i++;
   } 
}

void    draw_game(t_data *data)
{
    int i;
    int j;

    i = 0;
    mlx_clear_window(data->mlx, data->win);
    while(i < data->w_h[1])
    {
        j = 0;
        while (j < data->w_h[0])
        {
            draw(data, i, j);
            j++;
        }
        i++;
    }
    draw_player(data); 
}