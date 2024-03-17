/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:30:22 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/08 18:09:28 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	if (s1 == s2)
		return (dst);
	if (s1 < s2)
		ft_memcpy(s1, s2, len);
	else
	{
		s1 = s1 + len;
		s2 = s2 + len;
		while (len > 0)
		{
			s1--;
			s2--;
			*s1 = *s2;
			len--;
		}
	}
	return (dst);
}
