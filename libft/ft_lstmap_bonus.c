/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:08:38 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/19 23:34:13 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_list;
	t_list	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		if (lst->content != NULL)
		{
			new_content = f(lst->content);
			new_list = ft_lstnew(new_content);
			if (new_list == NULL)
			{
				del(new_content);
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new_list);
		}
		lst = lst->next;
	}
	return (head);
}

/*void	*my_function(void *content)
{
	char *src = (char *)content;
	while (*src)
	{
		if (*src >= 'a' && *src <= 'z')
			*src = *src -32;
		src++;
	}
	return (content);
}

void ft_delete(void *content)
{
	free(content);
}
#include<stdio.h>
int main()
{
	const char *src = "hamza";
	const char *src1 = "abdllatif";
	const char *src2 = "abouyata";

	t_list *head = ft_lstnew(ft_strdup(src1));
	t_list *new = ft_lstnew(ft_strdup(src));
	t_list *new1 = ft_lstnew (ft_strdup(src2));
	new->next = head;
	head->next = new1;
	t_list *mapped_list = ft_lstmap(new, my_function, ft_delete);
	t_list *current = mapped_list;
	while(current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&mapped_list, ft_delete);
	return 0;
}*/
