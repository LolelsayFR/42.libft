/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:54:14 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/16 03:35:53 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	**ft_lst_to_tab_str(t_list *lst)
{
	char	**tab;
	long	i;
	long	size;

	i = 0;
	size = ft_lstsize(lst);
	tab = ft_calloc(size + 1, sizeof(char *));
	while (i < size)
	{
		tab[i++] = ft_strdup(lst->content);
		lst = lst->next;
	}
	tab[i] = NULL;
	return (tab);
}

t_list	*ft_tab_to_lst_str(char **tab)
{
	t_list	*new;
	long	i;

	i = 0;
	new = ft_lstnew(ft_strdup(tab[i++]));
	while (tab[i] != NULL)
		ft_lstadd_back(&new, ft_lstnew(ft_strdup(tab[i++])));
	return (new);
}

//WIP
//void	**ft_lst_to_tab(t_list *lst, size_t n)
//{
//	void	**tab;
//	long	i;
//	long	size;
//
//	(void)n;
//	i = 0;
//	size = ft_lstsize(lst);
//	tab = ft_calloc(size, sizeof(void *));
//	while (i < size)
//	{
//		tab[i] = ft_calloc(sizeof(lst->content), sizeof(void));
//		ft_memcpy(tab[i++], lst->content, sizeof(lst->content)); BUG HERE
//		lst = lst->next;
//	}
//	return (tab);
//}
