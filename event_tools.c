/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:24:32 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/17 18:10:18 by abouyata         ###   ########.fr       */
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
    free(img_data);
    mlx_clear_window(img_data->mlx, img_data->win);
    mlx_destroy_window(img_data->mlx, img_data->win);
    exit(0);
}

int is_wall(t_data *img, int x1, int y1)
{
    if (x1 >= 0 && y1 >= 0 && x1 < img->w_h[1] && y1 < img->w_h[0]
            && img->map[x1 / 48][y1 /48]== '1')
            {
                return (1);
            }
    return (0);
}

int is_door(t_data *data)
{
    
}