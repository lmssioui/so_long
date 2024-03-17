/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:33:53 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/19 22:20:30 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*str;
	char	*original;

	str = (char *) s;
	dup = (char *)malloc(ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	original = dup;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (original);
}
