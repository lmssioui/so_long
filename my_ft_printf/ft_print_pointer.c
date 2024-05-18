/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:26:30 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/07 14:33:37 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long n)
{
	int		j;
	char	*array;

	j = 0;
	array = "0123456789abcdef";
	if (n >= 16)
	{
		j += ft_print_pointer(n / 16);
		j += ft_print_pointer(n % 16);
	}
	else
	{
		j += ft_putchar(array[n]);
	}
	return (j);
}
