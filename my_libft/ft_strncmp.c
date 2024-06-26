/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:10:13 by abouyata          #+#    #+#             */
/*   Updated: 2024/03/25 16:47:02 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0 && (*s1 || *s2))
	{
		u1 = (unsigned char) *s1;
		u2 = (unsigned char) *s2;
		if (u1 != u2)
			return (u1 - u2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
