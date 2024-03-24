/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:24:32 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/24 17:24:20 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int is_collectible(t_data *img_data, int x1, int y1)
{
    int x;
    int y;

    x = x1 / 48;
    y = y1 / 48;
    if(x >=0 && x < img_data->w_h[1] && y >= 0 && y < img_data->w_h[0]
                && img_data->map[x][y] == 'C')
            return (1);
    return (0);
}
void    exit_game(t_data *img_data)
{
    free_map(img_data);
    mlx_clear_window(img_data->mlx, img_data->win);
    mlx_destroy_window(img_data->mlx, img_data->win);
    exit(0);
}

int is_wall(t_data *img, int x1, int y1)
{
    int x;
    int y;
    
    x = x1 / 48;
    y = y1 / 48;
    if (x >= 0 && y >= 0 && x < img->w_h[1] && y < img->w_h[0]
            && img->map[x][y]== '1')
            {
                return (1);
            }
    return (0);
}
int all_collected(t_data *img_data)
{
   int i;
   int j;

   i = 0;
   while (i < img_data->w_h[1])
   {
    j = 0;
    while (j < img_data->w_h[0])
    {
        if (img_data->map[i][j] == 'C')
            return (0);
        j++;
    }
    i++;
   }
   return (1);
}

int is_door(t_data *data, int x, int y)
{
    x = x / 48;
    y = y / 48;
    if (x >= 0 && x < data->w_h[1] && y >= 0 && y < data->w_h[0]
            && data->map[x][y] == 'E')
    {
        if (all_collected(data))
        {
            return (1);
        }
    }
    return (0);
}