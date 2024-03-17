/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:44:39 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/20 00:36:29 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list *head = ft_lstnew("Aplle");
	t_list *node = ft_lstnew("Ourika");
	t_list *tmp;
	size_t i = 0;
	head->next = node;
	tmp = head;
	while (tmp)
	{

		printf("link %ld = %s\n",i ,(char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	t_list *node1  = ft_lstnew("Aghmat");
	ft_lstadd_back(&head,node1);
	printf(".............\n");
	i = 0;
	while(head)
	{
		printf("link %ld = %s\n",i,(char *)head->content);
		head = head->next;
		i++;
	}
}*/
