/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:22:48 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/23 23:12:20 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	unsigned int		i;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	i = 0;
	if (s1 == s2 || n == 0)
		return (dst);
	if (!s1 && !s2)
		return (NULL);
	if (s1 != s2)
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	int a[] = {0, 2, 3};
	int b[] = {7, 1};
	void *c = ft_memcpy(b,a,12);
	int *p = (int *)c;
	int i = 0;
	while (i < 3)
	{
		printf("%d\n",p[i]);
		i++;
	}
	//printf("%s\n",memcpy("khouya","lkhwadrya",2));
}*/