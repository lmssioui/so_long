/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:05:24 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/04 17:11:15 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa1(unsigned int x)
{
	char	*hexa;
	int		res[20];
	int		i;
	int		c;

	i = 0;
	hexa = "0123456789ABCDEF";
	while (x >= 16)
	{
		res[i] = hexa[x % 16];
		x = x / 16;
		i++;
	}
	c = i + 1;
	res[i] = hexa[x];
	while (i >= 0)
	{
		ft_putchar(res[i]);
		i--;
	}
	return (c);
}
