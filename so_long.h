/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:27:13 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 09:49:49 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "my_ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "my_libft/libft.h"
# include "mlx.h"
# include <errno.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	int		p;
	int		c;
	int		e;
	void	*mlx;
	void	*win;
	void	*img;
	char	w_h[2];
	char	**map;
	int		player_position[2];
	void	*walls;
	void	*floor;
	void	*exit;
	void	*players;
	void	*collectible;
	void	*enemy;
	char	*door;
	char	*door_open;
	int		img_width;
	int		img_height;
	int		test;
	char	*right_sprites[5];
	char	*left_sprites[5];
	size_t	move_c;
	int		current_frame[2];
	int		left_right;

}			t_data;

int			is_enemy(t_data *data, int x1, int y1);
int			ver_path(char *s);
int			count_lines(char *av);
int			check_char(char c);
void		data_save(t_data *data, char *str, int fd);
void		is_rectangle(char *av);
void		store_map(char *av, t_data *data);
int			pce_validate(t_data *data);
void		existing_wall(t_data *data);
void		player_position(t_data *data);
void		flood_fill(t_data *data, int x, int y);
int			check_map(t_data *data);
void		validate_path(t_data *data);
void		free_map(t_data *data);
void		draw_game(t_data *data);
void		load_sprites(t_data *data);
void		load_pfwc(t_data *data);
int			all_collectible(t_data *data);
void		draw_elem(t_data *data, int i, int j);
void		draw_sprite(t_data *img_data);
int			first_key(int keycode, t_data *img_data);
int			is_collectible(t_data *img_data, int x1, int y1);
void		key_next(int keycode, int x1, int y1, t_data *img_data);
void		draw_sprite(t_data *img_data);
int			is_wall(t_data *img, int x1, int y1);
void		exit_game(t_data *img_data);
int			is_door(t_data *data, int x, int y);
int			ft_strlen1(const char *s);
#endif