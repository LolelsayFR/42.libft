/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 05:40:26 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:54:46 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (!c)
		return (0);
	if (c >= '0' && c <= '9')
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
//		if ((ft_isdigit(*av[1]) && isdigit(*av[1]))
//			|| isdigit(*av[1]) == ft_isdigit(*av[1]))
//			printf("\033[32m[ok]");
//		if (ft_isalpha(*av[1]))
//			printf("Is\n");
//		else
//			printf("IsNot\n");
//	}
//	return (0);
//}
