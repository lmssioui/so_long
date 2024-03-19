/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:42:25 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/17 15:05:52 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    alocate_map(t_data *data)
{
    data->map = (char **)malloc(sizeof(char *) * (data->w_h[1] + 1));
    if (data->map)
        return ;
}

void    game_began(t_data *data)
{
    load_pfwc(data);
    load_sprites(data);
    draw_game(data);
    mlx_loop(data->mlx);
    mlx_hook(data->win, 2, 0, first_key, (void *)data);
}
int main(int ac, char **av)
{
    t_data data;
    
    if (ac != 2)
    {
        ft_printf("Entre a valid number of argument!\n");
        return (1);
    }
    ver_path(av[1]);
    data.w_h[1] = count_lines(av[1]);
    alocate_map(&data);
    store_map(av[1], &data);
    is_rectangle(av[1]);
    existing_wall(&data);
    player_position(&data);
    validate_path(&data);
    free_map(&data);
    alocate_map(&data);
    store_map(av[1],&data);
    data.mlx = mlx_init();
    data.win = mlx_new_window(data.mlx, data.w_h[0] * 48, data.w_h[1] * 48, "SO_LONG");
    game_began(&data);
}