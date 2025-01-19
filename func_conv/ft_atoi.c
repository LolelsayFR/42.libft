/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:28:31 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 00:42:42 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	sign;
	int	i;

	val = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		val = val * 10 + (str[i] - '0');
		i++;
	}
	return (val * sign);
}

//#include <stdlib.h>
//#include <stdio.h>
//
//int	main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	if (atoi(av[1]) == ft_atoi(av[1]))
//		printf("\033[32m[ok]"
//	else
//		printf("\033[32m[ko]"
//	printf("Result of Atoi: %d\n", atoi(av[1]));
//	printf("Result of FT_Atoi: %d\n", ft_atoi(av[1]));
//	return (0);
//}
