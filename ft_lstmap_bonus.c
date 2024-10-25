/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:29:00 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/25 22:54:49 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newfirst;

	newfirst = NULL;
	while (lst)
	{
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&new, del);
			break ;
		}
		new->content = f(lst->content);
		ft_lstadd_back(&newfirst, new);
		lst = lst->next;
	}
	return (newfirst);
}
