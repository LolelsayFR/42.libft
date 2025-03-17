/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 01:38:56 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/17 23:31:34 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "custom/libftplus_define.h"
#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av, char **env)
{
	t_list	*test;
	t_list	*remove;
	int		i;
	char	**tab;

	tab = NULL;
	i = 0;
	(void)ac;
	(void)av;
	test = ft_tab_to_lst_str(env);
	remove = test;
	tab = ft_lst_to_tab_str(test);
	i = -1;
	while (tab[++i] != NULL)
		ft_logs_add(i % 3, tab[i]);
	ft_printlogs(ALL_LOGS);
	ft_free_strtab(tab);
	ft_lstclear(&test, free);
	ft_logs_free();
}
