/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:22:13 by emaillet          #+#    #+#             */
/*   Updated: 2024/09/23 15:27:29 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("Length of the string: %d\n", ft_strlen(av[1]));
	return (0);
}




