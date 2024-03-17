/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:58:15 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/24 00:14:04 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int main()
{
	int arr[]={3, 4};
	
	printf("%d\n%d\n", arr[0], arr[1]);
	
	ft_memset((char *)arr,57, 1);
	ft_memset((char *)arr + 1,5,1);
	ft_memset((char *)arr + 4, 255, 3);
	ft_memset((char *)arr + 7 , 127, 1);

	printf("---- After seting -----\n");
	printf("%d\n%d\n", arr[0], arr[1]);
}*/
