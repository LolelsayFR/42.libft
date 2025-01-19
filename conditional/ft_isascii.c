/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 05:40:26 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:56:39 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	if (c < 0)
		return (0);
	if (c >= '\0' && c <= ('~' + 1))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//
//int	main(int argc, char *av[])
//{
//	if (argc == 2)
//	{
//		if ((ft_isascii(atoi(av[1])) && isascii(atoi(av[1])))
//			|| isascii(atoi(av[1])) == ft_isascii(atoi(av[1])))
//			printf("\033[32m[ok]");
//		if (ft_isascii(atoi(av[1])))
//			printf("Is\n");
//		else
//			printf("IsNot\n");
//	}
//	return (0);
//}
