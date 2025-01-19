/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:26:36 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 19:14:21 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int	main(int argc, char *av[])
//{
//	if (argc == 2)
//	{
//		if ((ft_isprint(*av[1]) && isprint(*av[1]))
//			|| isprint(*av[1]) == ft_isprint(*av[1]))
//			printf("\033[32m[ok]");
//		if (ft_print(*av[1]))
//			printf("Is\n");
//		else
//			printf("IsNot\n");
//	}
//	return (0);
//}
