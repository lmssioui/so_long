/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 06:08:29 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/24 00:25:07 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void print_char_index(unsigned int index, char *c)
{
    printf("Character at index %u is: %c\n", index, *c);
}

int main()
{
    char my_string[] = "Hello, World!";

    ft_striteri(my_string, &print_char_index);
    return 0;
}*/
