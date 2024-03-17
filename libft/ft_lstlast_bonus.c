/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:13:22 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/14 16:50:18 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>
int main()
{
	t_list *head = ft_lstnew("apple");
	t_list *node = ft_lstnew("ourika");
	t_list *str;
	head->next = node;
	str = ft_lstlast(head);
	printf("%s\n",(char *)str->content);
}*/
