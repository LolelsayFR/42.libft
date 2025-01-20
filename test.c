/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 06:50:07 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 16:33:35 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_repbyx(unsigned int c, char s)
{
	(void)c;
	s = 'x';
	return (s);
}

int	main(void)
{
	char	*str;
	char	**tab;
	char	**new_tab;
	int		i;
	t_list	*test;

	test = NULL;
	str = ft_strdup_lst("Hello World le test de fou haha trop");
	tab = ft_split_lst(str, ' ');
	new_tab = ft_strtabdup_lst(tab);
	ft_strjoin_lst(tab[1], tab[0]);
	ft_printfd(2, "Hello World %s\n", new_tab[0]);
	ft_printf("%s\n", ft_substr_lst(str, 0, 4));
	ft_printf("%s\n", ft_strtrim_lst(str, "Hellotrp"));
	ft_printf("%s\n", ft_strmapi_lst(new_tab[0], ft_repbyx));
	ft_printf("%s\n", ft_ltoa_lst(LONG_MAX));
	i = 0;
	while (i++ != 50)
		ft_lstadd_back(&test, ft_lstnew(ft_itoa(i)));
	ft_lstprintfd(test, 2);
	test = ft_lst_unrotate(&test, 4);
	ft_lst_rotate(&test, 4);
	ft_lst_swap(&test->next->next->next->next->next->next->next, &test);
	ft_lstprintfd(test, 2);
	ft_lstclear(&test, nufree);
	ft_alist_free();
	return (0);
}
