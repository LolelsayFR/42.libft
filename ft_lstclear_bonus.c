/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:37 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/27 03:03:21 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
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
//
//	if (argc == 2)
//	{
//		tete = malloc(sizeof(t_list));
//		tete->content = malloc(ft_strlen(argv[1]) + 1);
//		ft_strlcpy(tete->content, argv[1], ft_strlen(argv[1]));
//		tete->next = NULL;
//		ft_lstprint(tete);
//		ft_lstclear(&tete, free);
//		if (tete)
//			ft_lstprint(tete);
//		else
//			printf("GOOD ;P");
//	}
//	return (0);
//}
