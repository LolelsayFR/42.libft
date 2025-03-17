/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 21:59:41 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/16 03:47:23 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	**ft_logslist(void)
{
	static t_list	*alloc = NULL;

	if (alloc == NULL)
		alloc = ft_calloc(1, sizeof(t_list));
	if (alloc == NULL)
		return (NULL);
	return (&alloc);
}

void	ft_logs_free(void)
{
	t_list	**head;
	t_list	*tmp;
	t_logs	*l;

	head = ft_logslist();
	tmp = *head;
	while (tmp->next != NULL)
	{
		l = tmp->content;
		free(l->log);
		tmp = tmp->next;
	}
	ft_lstclear(head, free);
}

size_t	ft_logs_add(t_log_type id, char *msg)
{
	t_logs	*log;

	log = ft_calloc(1, sizeof(t_logs));
	if (log == NULL)
		return (-1);
	log->log_type = id;
	log->log = ft_strdup(msg);
	ft_lstadd_front(ft_logslist(), ft_lstnew(log));
	return (ft_lstsize(*ft_logslist()));
}

void	ft_printlogs(t_log_type id)
{
	t_list	*tmp;
	char	*s;
	t_logs	*l;

	tmp = *ft_logslist();
	while (tmp->next != NULL)
	{
		l = tmp->content;
		s = l->log;
		if ((id == WARNING_LOGS || id == ALL_LOGS)
			&& l->log_type == WARNING_LOGS)
			ft_printfd(2, LANG_W"%s\n", s);
		else if ((id == ERROR_LOGS || id == ALL_LOGS)
			&& l->log_type == ERROR_LOGS)
			ft_printfd(2, LANG_E"%s\n", s);
		else if ((id == STANDARD_LOGS || id == ALL_LOGS)
			&& l->log_type == STANDARD_LOGS)
			ft_printfd(1, "%s\n", s);
		tmp = tmp->next;
	}
}

void	ft_printlogs_fd(t_log_type id, int fd)
{
	t_list	*tmp;
	char	*s;
	t_logs	*l;

	tmp = *ft_logslist();
	while (tmp->next != NULL)
	{
		l = tmp->content;
		s = l->log;
		if ((id == WARNING_LOGS || id == ALL_LOGS)
			&& l->log_type == WARNING_LOGS)
			ft_printfd(fd, LANG_W"%s\n", s);
		else if ((id == ERROR_LOGS || id == ALL_LOGS)
			&& l->log_type == ERROR_LOGS)
			ft_printfd(fd, LANG_E"%s\n", s);
		else if ((id == STANDARD_LOGS || id == ALL_LOGS)
			&& l->log_type == STANDARD_LOGS)
			ft_printfd(fd, "%s\n", s);
		tmp = tmp->next;
	}
}
