/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:45:37 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/20 00:28:42 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (del == NULL)
	{
		return ;
	}	
	if (lst)
	{
		while (*lst != NULL)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
/*
#include <stdio.h>
void ft_delete(void *content)
{
	free(content);
}
int main()
{
	const char *src = "abdellatif";
	t_list *new = ft_lstnew(ft_strdup(src));

	printf("%s\n", (char *)new->content);
	printf("after deleting...");
	ft_lstclear(&new, ft_delete);
	printf("%s\n", (char *)new->content);
}*/
