/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:33:12 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:25:09 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
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
