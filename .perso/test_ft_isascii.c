/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 06:16:23 by emaillet          #+#    #+#             */
/*   Updated: 2024/09/26 17:41:25 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("Retour de ft_isascii : %d\n", ft_isascii(av[1][0]));
	printf("Retour de ft_isalnum : %d\n", ft_isalnum(av[1][0]));
	printf("Retour de ft_isalpha : %d\n", ft_isalpha(av[1][0]));
	printf("Retour de ft_isdigit : %d\n", ft_isdigit(av[1][0]));
	printf("Retour de ft_isprint : %d\n", ft_isprint(av[1][0]));
	return (0);
}
