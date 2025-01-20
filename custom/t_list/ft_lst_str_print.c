/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_str_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:12:40 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 15:28:54 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstprintfd(t_list *liste, int fd)
{
	t_list	*tmp;
	char	*s;

	tmp = liste;
	ft_printfd(fd, "➲ Start\n⬇\n");
	while (tmp != NULL)
	{
		s = tmp->content;
		ft_printfd(fd, "➲ %s\n⬇\n", s);
		tmp = tmp->next;
	}
	ft_printfd(fd, "➲ End\n");
}
