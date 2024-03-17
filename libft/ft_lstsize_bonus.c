/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:06:27 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 16:39:19 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*#include <stdio.h>
int main()
{
	t_list *head = ft_lstnew("aplle");
	t_list *node1 = ft_lstnew("ourika");
	t_list *node2 = ft_lstnew("arbalo");
	t_list *node3 = ft_lstnew("oukaymden");
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	printf("%d\n",ft_lstsize(head));
}*/