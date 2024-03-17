/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:54:40 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/06 11:04:48 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long n1)
{
	unsigned int	c;

	c = 1;
	if (n1 < 0)
	{
		c++;
		n1 = -n1;
	}
	while (n1 >= 10)
	{
		n1 = n1 / 10;
		c++;
	}
	return (c);
}

int	ft_putnbr(int nb)
{
	long	n;
	long	n1;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
	n1 = nb;
	return (ft_count(n1));
}
