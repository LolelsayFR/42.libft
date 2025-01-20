/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 07:16:41 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 13:21:25 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	**ft_strtabdup(char **tab)
{
	int		i;
	int		size_y;
	char	**new_tab;

	i = 0;
	size_y = 0;
	while (tab[size_y] != NULL)
		size_y++;
	new_tab = ft_calloc((size_y + 1), sizeof(char *));
	while (i < size_y)
	{
		new_tab[i] = ft_strdup(tab[i]);
		i++;
	}
	new_tab[size_y] = NULL;
	return (new_tab);
}

char	**ft_strtabdup_lst(char **tab)
{
	int		i;
	int		size_y;
	char	**new_tab;

	i = 0;
	size_y = 0;
	while (tab[size_y] != NULL)
		size_y++;
	new_tab = ft_calloc((size_y + 1), sizeof(char *));
	while (i < size_y)
	{
		new_tab[i] = ft_strdup(tab[i]);
		ft_lstadd_back(ft_alist(), ft_lstnew(new_tab[i]));
		i++;
	}
	ft_lstadd_back(ft_alist(), ft_lstnew(new_tab));
	new_tab[size_y] = NULL;
	return (new_tab);
}
