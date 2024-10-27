/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:26 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/27 02:40:36 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *lnew)
{
	lnew -> next = *lst;
	*lst = lnew;
}

//#include <stdio.h>
//
//void	ft_lstprint(t_list *liste)
//{
//	t_list	*tmp;
//
//	tmp = liste;
//	while (tmp != NULL)
//	{
//		printf("%s -> ", (char *)tmp->content);
//		tmp = tmp->next;
//	}
//	printf("NULL\n");
//}
//
//int	main(int argc, char *argv[])
//{
//	t_list	*test;
//
//	if (argc == 3)
//	{
//		test = ft_lstnew(argv[1]);
//		ft_lstadd_front(&test, ft_lstnew(argv[2]));
//		ft_lstprint(test);
//	}
//	return (0);
//}
