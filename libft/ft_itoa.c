/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:22:22 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/17 01:52:23 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count(long long nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	nbr;
	int			i;
	int			nb;

	nbr = n;
	nb = count(n);
	str = (char *)malloc(nb + 1);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	i = nb - 1;
	while (i >= 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	str[nb] = '\0';
	return (str);
}
