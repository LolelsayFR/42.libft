/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_str_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:12:40 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/15 23:07:09 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstprintfd(t_list *lst, int fd)
{
	t_list	*tmp;
	char	*s;
	size_t	ret;

	tmp = lst;
	ret = ft_printfd(fd, "➲ Start\n⬇\n");
	while (tmp != NULL)
	{
		s = tmp->content;
		ret += ft_printfd(fd, "➲ %s\n⬇\n", s);
		tmp = tmp->next;
	}
	ret += ft_printfd(fd, "➲ End\n");
}

void	ft_putlst_fd(t_list *lst, int fd)
{
	t_list	*tmp;
	char	*s;

	tmp = lst;
	while (tmp != NULL)
	{
		s = tmp->content;
		ft_putendl_fd(s, fd);
		tmp = tmp->next;
	}
}

void	ft_putlst_fd_prefix(t_list *lst, int fd, char *prefix)
{
	t_list	*tmp;
	char	*s;

	tmp = lst;
	while (tmp != NULL)
	{
		s = tmp->content;
		ft_putstr_fd(prefix, fd);
		ft_putendl_fd(s, fd);
		tmp = tmp->next;
	}
}
