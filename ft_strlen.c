/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:33:12 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 23:28:24 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

//#include <stdio.h>
//
//int	main(int argc, char *argv[])
//{
//	if (argc == 2)
//		printf("Strlen = %zu \n", ft_strlen(argv[1]));
//	return (0);
//}
