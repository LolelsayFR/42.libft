/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:51 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:11:30 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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
//void	ft_repbyx(void *s)
//{
//	char	*sx;
//
//	sx = s;
//	sx[0] = 'X';
//}
//
//int	main(int argc, char *argv[])
//{
//	t_list	*test;
//
//	if (argc == 2)
//	{
//		test = ft_lstnew(ft_strdup(argv[1]));
//		ft_lstprint(test);
//		ft_lstiter(test, ft_repbyx);
//		ft_lstprint(test);
//	}
//	return (0);
//}
