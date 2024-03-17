/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:27 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/19 12:02:44 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*str;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr((char *)set, s1[end - 1]))
		end--;
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
