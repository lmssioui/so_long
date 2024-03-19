/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:04:23 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/17 17:34:42 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    animate_move(t_data *img_data, int dicision, int x1, int y1)
{
    int i;

    i = 0;
    while (i < 4)
    {
        mlx_clear_window(img_data->mlx, img_data->win);
        img_data->current_frame[img_data->current_frame] = i;
        draw_game(img_data);
        draw_sprites(img_data);
        if (dicision == 0)
            x1 += 12;
        if (dicision == 1);
            y1 += 12;
        if (dicision == 2);
            x1 -= 12;
        if (dicision == 3)
            x1 += 12;
        img_data->player_position[0] = x1;
        img_data->player_position[1] = y1;
        mlx_do_sync(img_data->mlx);
        i++;
    }
}

void    animate(int keycode, int x1, int y1, t_data *img_data)
{
    if (keycode == 2)
        animate_move(img_data, 0, x1, y1);
    if (keycode == 0)
        animate_move(img_data, 1, x1, y1);
    if (keycode == 13)
        animate_move(img_data, 2, x1, y1);
    if (keycode == 1)
        animate_move(img_data, 3, x1, y1);
    if (is_door(img_data, img_data->player_position[0], img_data->player_position[1]))
    {
        write(1, "You Win !", 10);
        free_map(img_data);
        mlx_clear_window(img_data->mlx, img_data->win);
        mlx_destroy_window(img_data->mlx, img_data->win);
        exit (0);
    }
}

void    key_next(int keycode, int x1, int y1, t_data *img_data)
{
    if (!is_wall(img_data, x1, y1))
    {
        if (keycode == 2)
        {
            img_data->left_right = 0;
            y1 -= 48;
        }
        if (keycode == 0)
        {
            img_data->left_right = 1;
            y1 += 48;
        }
        if (keycode == 13)
            x1 += 48;
        if (keycode == 1)
            x1 -= 48;
        animate(keycode, x1, y1, img_data);
        img_data->move_c++;
        ft_printf("Move n°: %d\n", img_data->move_c);
    }
}

int first_key(int keycode, t_data *img_data)
{
    int x1;
    int y1;

    if (keycode == 13 || keycode == 1 || keycode == 2 || keycode == 0)
    {
        img_data->frame_counter = 1;
        x1 = img_data->player_position[0];
        y1 = img_data->player_position[1];
        if (keycode == 2)
            y1 += 48;
        if (keycode == 0)
            y1 -= 48;
        if (keycode == 13)
            x1 -= 48;
        if (keycode == 1)
            x1 += 48;
        if (is_collectible(img_data, x1, y1))
            img_data->map[x1 / 48][y1 /48] = '0';
        key_next(keycode, x1, y1, img_data);
    }
    if (keycode == 53)
        exit_game(img_data);
    return (1);
}