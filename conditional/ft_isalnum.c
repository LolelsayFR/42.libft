/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 05:30:57 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:55:15 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int c)
{
	if (!c)
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
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
//		if ((ft_isalnum(*av[1]) && isalnum(*av[1]))
//			|| isalnum(*av[1]) == ft_isalnum(*av[1]))
//			printf("\033[32m[ok]");
//		if (ft_isalnum(*av[1]))
//			printf("Is\n");
//		else
//			printf("IsNot\n");
//	}
//	return (0);
//}
