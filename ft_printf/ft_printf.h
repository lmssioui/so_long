/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:09:09 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/14 11:34:15 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	    ft_printf(const char *format, ...);
int	    ft_putchar(int c);
int	    ft_putstr(const char *s);
int	    ft_putnbr(int nb);
size_t	ft_strlen(const char *s);
int	    ft_print_hexa(unsigned int x);
int	    ft_print_hexa1(unsigned int x);
int	    ft_print_pointer(unsigned long n);
int	    ft_print_unsg(unsigned int u);
char	*ft_strchr(const char *s, int c);

#endif
