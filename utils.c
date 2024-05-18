/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 07:27:34 by abouyata          #+#    #+#             */
/*   Updated: 2024/05/02 12:53:09 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ver_path(char *s)
{
	char	*extension;
	int		len;

	extension = ft_strrchr(s, '.');
	if (extension == NULL)
		{
			write(2, "Error\nEntre a valid path!", 25);
			exit(1);
		}
	len = ft_strlen(extension);
	if (len == 4 && extension && ft_strncmp(extension, ".ber", 4) == 0)
		return (0);
	else
	{
		write(2, "Error\nNot a <.ber> file!!", 25);
		exit(1);
	}
}

int	count_lines(char *av)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(av, O_RDONLY);
	if (fd < 0)
		return (0);
	i = 0;
	line = get_next_line(fd);
	if (line == NULL)
	{
		write(2, "Error\nEmpty File", 16);
		exit(1);
	}
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (i);
}

int	check_char(char c)
{
	if (c == '0' || c == '1' || c == 'C' || c == 'E' || c == 'P' || c == 'N')
		return (1);
	return (0);
}

void	data_save(t_data *data, char *str, int fd)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->w_h[1])
	{
		j = 0;
		data->map[i] = (char *)malloc(sizeof(char) * data->w_h[0]);
		while (j < data->w_h[0])
		{
			if (!check_char(str[j]))
			{
				write(2, "Error\nIncompatibl map", 21);
				exit(1);
			}
			data->map[i][j] = str[j];
			j++;
		}
		free(str);
		str = get_next_line(fd);
		i++;
	}
}

void	store_map(char *av, t_data *data)
{
	int		fd;
	char	*str;

	fd = open(av, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Error\nWrong file", 11);
		exit(1);
	}
	str = get_next_line(fd);
	if (ft_strlen(str) == 0)
	{
		write(2, "Error\nEmpty map", 15);
		exit(1);
	}
	data->w_h[0] = ft_strlen(str) - 1;
	data_save(data, str, fd);
	close(fd);
}
