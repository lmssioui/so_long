/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 02:34:01 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/23 21:03:35 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**ft_free(char **str, int n)
{
	while (n > 0)
	{
		free(str[--n]);
	}
	free(str);
	return (0);
}

static char	**ft_strsub(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != '\0' && s[i] != c && j++ >= 0)
			i++;
		tab[n++] = ft_substr(s, i - j, j);
		if (!tab[n - 1])
			return (ft_free(tab, n));
	}
	tab[n] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc((ft_count((char *)s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (ft_strsub(tab, s, c));
}
/*#include <stdio.h>
int main()
{
	char *str = "abdellatif student in 1337 school";
	char c = ' ';
	char **tab;
	tab = ft_split(str, c);
	size_t i = 0;
	int j = 1;
	while (i < ft_count(str,c))
	{
		printf("string%d: %s\n",j,tab[i]);
		i++;
		j++;
	}
}*/
