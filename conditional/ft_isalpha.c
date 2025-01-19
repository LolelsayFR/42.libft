/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 05:34:41 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:55:07 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if (!c)
		return (0);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
//		if ((ft_isalpha(*av[1]) && isalpha(*av[1]))
//			|| isalpha(*av[1]) == ft_isalpha(*av[1]))
//			printf("\033[32m[ok]");
//		if (ft_isalpha(*av[1]))
//			printf("Is\n");
//		else
//			printf("IsNot\n");
//	}
//	return (0);
//}
