/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_removeone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 01:24:57 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/14 02:16:10 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstremoveone(t_list **head, t_list *lst, void (*del)(void*))
{
	t_list	*tmp_head;

	if (!del || !lst || !*head)
		return ;
	if (*head == lst)
		*head = (*head)->next;
	tmp_head = *head;
	while (tmp_head->next != lst && tmp_head->next != NULL)
		tmp_head = tmp_head->next;
	if (tmp_head->next != NULL)
		tmp_head->next = tmp_head->next->next;
	else
		return ;
	ft_lstdelone(lst, del);
}
