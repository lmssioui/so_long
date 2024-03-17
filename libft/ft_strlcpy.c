/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:04:02 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/08 20:55:18 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int destsize)
{
	unsigned int	i;

	i = 0;
	if (destsize > 0)
	{
		while (i < destsize - 1 && *src)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}
