/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:37:57 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/19 19:17:04 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	size_t	little_len;

	if (*little == 0 || little == NULL)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen((char *)little);
	while (*big && len >= little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char big[] = "abdellatif bouyatas";
	const char little[] = "";
	//char *res = strnstr(big,little,0);
	//printf("%s\n", res);
	char *res1 = ft_strnstr(big,little,0);
	printf("%s
}*/
