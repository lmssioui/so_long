/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 08:11:19 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/25 16:46:48 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			p = (char *)s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		p = (char *)s;
	}
	return (p);
}
