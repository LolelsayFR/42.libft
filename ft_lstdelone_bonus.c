/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:48 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/27 03:03:40 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
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
//	t_list	*tete;
//	t_list	*second;
//
//	if (argc == 3)
//	{
//		tete = malloc(sizeof(t_list));
//		tete->content = malloc(ft_strlen(argv[1]) + 1);
//		ft_strlcpy(tete->content, argv[1], ft_strlen(argv[1]));
//		tete->next = second;
//		second = malloc(sizeof(t_list));
//		second->content = malloc(ft_strlen(argv[2]) + 1);
//		ft_strlcpy
//		ft_lstprint(tete);
//		ft_lstclear(&tete, free);
//		if (tete)
//			ft_lstprint(tete);
//		else
//			printf("GOOD ;P");
//	}
//	return (0);
//}
