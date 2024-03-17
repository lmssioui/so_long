/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:45:07 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/20 00:57:05 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int main()
{
	t_list *head = ft_lstnew("aplle");
	t_list *nodeone = ft_lstnew("ourika");
	head->next = nodeone;

	t_list *tmp = head;
	while(tmp)
	{
		printf("%s\n",(char *)tmp->content);
		tmp = tmp->next;
	}
	printf("....after adding in front....\n");
	t_list *new_Node = ft_lstnew("banana");
	ft_lstadd_front(&head,new_Node);
	t_list *current = head;
	while(current)
	{
		printf("%s\n",(char *)current->content);
		current = current->next;
	}
	return (0);
}*/	
