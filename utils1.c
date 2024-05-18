/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:07:02 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 11:53:43 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_rectangle(char *av)
{
	int		fd;
	int		first_line;
	char	*str;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error\nopening file failed", 25);
		exit(1);
	}
	str = get_next_line(fd);
	first_line = ft_strlen1(str);
	while (str)
	{
		if (ft_strlen1(str) != first_line)
		{
			free(str);
			write(2, "Error\ninvalid map", 14);
			exit(0);
		}
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
}

void	wall_validate(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->w_h[0])
	{
		if (data->map[0][i] != '1' || data->map[data->w_h[1] - 1][i] != '1')
		{
			write(2, "Error\nmap not surender by walls", 31);
			exit(1);
		}
		if (i < data->w_h[1] && (data->map[i][data->w_h[0] - 1] != '1'
			|| data->map[i][0] != '1'))
		{
			write(2, "Error\nmap not surender by walls", 31);
			exit(1);
		}
		i++;
	}
}

int	pce_validate(t_data *data)
{
	int	i;
	int	j;

	data->p = 0;
	data->c = 0;
	data->e = 0;
	i = 0;
	while (i < data->w_h[1])
	{
		j = 0;
		while (j < data->w_h[0])
		{
			if (data->map[i][j] == 'P')
				data->p++;
			else if (data->map[i][j] == 'E')
				data->e++;
			else if (data->map[i][j] == 'C')
				data->c++;
			j++;
		}
		i++;
	}
	if (data->p != 1 || data->c < 1 || data->e != 1)
		return (0);
	return (1);
}

void	existing_wall(t_data *data)
{
	wall_validate(data);
	if (pce_validate(data) == 0)
	{
		write(2, "Error\nMap must contain one P, One E and at least one C!! ",
			57);
		exit(1);
	}
}

void	player_position(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->w_h[1])
	{
		j = 0;
		while (j < data->w_h[0])
		{
			if (data->map[i][j] == 'P')
			{
				data->player_position[0] = i * 48;
				data->player_position[1] = j * 48;
				return ;
			}
			j++;
		}
		i++;
	}
}
