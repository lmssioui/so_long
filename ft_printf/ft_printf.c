/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:52:47 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/07 14:11:26 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_printf_exe(char format, va_list p)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(p, int));
	else if (format == 's')
		count += ft_putstr(va_arg(p, const char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(p, int));
	else if (format == 'x')
		count += ft_print_hexa(va_arg(p, unsigned int));
	else if (format == 'X')
		count += ft_print_hexa1(va_arg(p, unsigned int));
	else if (format == 'p')
	{
		count += ft_putstr("0x");
		count += ft_print_pointer((unsigned long)va_arg(p, void *));
	}
	else if (format == 'u')
		count += ft_print_unsg(va_arg(p, unsigned int));
	else
		count += ft_putchar(format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	p;
	int		count;

	count = 0;
	va_start(p, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (count);
			if (ft_strchr("cspdiuxX", *format))
				count += ft_printf_exe(*format, p);
			else
				count += ft_putchar(*format);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(p);
	return (count);
}
