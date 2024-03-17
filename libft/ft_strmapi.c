/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:28:48 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/23 22:41:47 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char			*res;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	res = (char *)malloc(len_s + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len_s] = '\0';
	return (res);
}
/*
char ft_chifrage(unsigned int index, char c) 
{
	int result;
	if (index % 2 == 0) 
	{
		result = c + 1;
	}
	else 
	{
		result = c - 1;
	}
	return result;
}

int main() 

{
    const char *input_string = "1337";

    printf("Original string: %s\n", input_string);
   char *modified_string = ft_strmapi(input_string, &ft_chifrage);
    printf("Modified string: %s\n", modified_string);
    free(modified_string);
    return 0;
}*/
