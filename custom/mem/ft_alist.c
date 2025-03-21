/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:04:14 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/21 12:14:41 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	**ft_alist(void)
{
	static t_list	*alloc = NULL;

	if (alloc == NULL)
		alloc = ft_calloc(1, sizeof(t_list));
	return (&alloc);
}

void	ft_alist_free(void)
{
	t_list	**lst;

	lst = ft_alist();
	ft_lstclear(lst, nufree);
}

void	ft_alist_add_back(void *content)
{
	ft_lstadd_back(ft_alist(), ft_lstnew(content));
}

void	ft_alist_add_front(void *content)
{
	ft_lstadd_front(ft_alist(), ft_lstnew(content));
}
