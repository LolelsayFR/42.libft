/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:22:13 by emaillet          #+#    #+#             */
/*   Updated: 2024/09/23 17:07:44 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("Result of Atoi: %d\n", atoi(av[1]));
	printf("Result of FT_Atoi: %d\n", ft_atoi(av[1]));
	return (0);
}
