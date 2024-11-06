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
	t_list	*lnk;
	t_list	*n;
	t_list	*s;

	lnk = NULL;
	s = NULL;
	while (lst)
	{
		n = (t_list *)malloc(sizeof(t_list));
		if (!n)
		{
			ft_lstclear(&lnk, del);
			return (NULL);
		}
		n->content = f(lst->content);
		n->next = NULL;
		if (!lnk)
			lnk = n;
		else
			s->next = n;
		s = n;
		lst = lst->next;
	}
	return (lnk);
}
