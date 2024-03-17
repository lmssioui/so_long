/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:49 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/22 22:55:21 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL && f != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>
static void my_function(void *content)
{
	char *str = (char *)content;
	while(*str)
	{
		printf("-->%c<---\n",*str);
		str++;
	}
}
#include <stdio.h>
int main()
{
	const char *src = "abdellatif";
	t_list *new = ft_lstnew(ft_strdup(src));
	ft_lstiter(new, NULL);
}*/
