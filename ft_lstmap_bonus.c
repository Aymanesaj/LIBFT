/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:10:02 by asajed            #+#    #+#             */
/*   Updated: 2024/11/06 10:52:28 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*linker;

	head = NULL;
	linker = NULL;
	while (lst)
	{
		node = (t_list *)malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->content = f(lst->content);
		node->next = NULL;
		if (!head)
			head = node;
		else
			linker->next = node;
		linker = node;
		lst = lst->next;
	}
	return (head);
}
