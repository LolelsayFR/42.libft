/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:29:00 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/27 04:56:57 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&new, del);
			break ;
		}
		new->content = f(lst->content);
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

//#include <stdio.h>
//
//void	ft_lstprint(t_list *liste)
//{
//	t_list	*tmp;
//	char	*s;
//
//	tmp = liste;
//	while (tmp != NULL)
//	{
//		s = tmp->content;
//		printf("%s -> ", s);
//		tmp = tmp->next;
//	}
//	printf("NULL\n");
//}
//
//void	*ft_repbyx(void *s)
//{
//	char	*sx;
//
//	sx = s;
//	sx[0] = 'X';
//	return (s);
//}
//
//int	main(int argc, char *argv[])
//{
//	t_list	*test;
//	t_list	*mapitest;
//
//	if (argc == 2)
//	{
//		test = ft_lstnew(ft_strdup(argv[1]));
//		ft_lstprint(test);
//		mapitest = ft_lstmap(test, ft_repbyx, free);
//		ft_lstprint(mapitest);
//	}
//	return (0);
//}
