/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:56:51 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:32:08 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (!c)
		return (0);
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

//#include <unistd.h>
//
//int	main(int ac, char **av)
//{
//	int		i;
//	char	tl;
//	char	tu;
//
//	i = 0;
//	if (ac != 2)
//		return (0);
//	while (av[1][i])
//	{
//		tl = ft_tolower(av[1][i]);
//		tu = ft_toupper(av[1][i]);
//		write(1, &tl, 1);
//		write(1, " | ", 3);
//		write(1, &tu, 1);
//		write(1, "\n", 1);
//		i++;
//	}
//	return (0);
//}
