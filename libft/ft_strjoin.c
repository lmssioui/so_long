/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 06:25:25 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/14 11:32:35 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	if (!s1 || !s2)
	{
		if (!s1)
			return ((char *)s2);
		return ((char *)s1);
	}
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	str = (char *)malloc(len_s1 + len_s2 + 1);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strlcpy(str, s1, len_s1 + 1);
	else
		str[0] = '\0';
	if (s2 != NULL)
		ft_strlcat(str + len_s1, s2, len_s1 + len_s2 + 1);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s" , ft_strjoin(NULL,"TAZA"));
}*/
