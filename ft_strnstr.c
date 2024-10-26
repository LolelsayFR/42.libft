/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 16:17:54 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	step;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		step = 0;
		while ((i + step) < len && big[i + step] == little[step])
		{
			step++;
			if (!little[step])
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	char	*result;
//
//	result = ft_strnstr("Ft42 Test de fou lalalala FFFtFFt44442222", "fou", 7);
//	if (result)
//		printf("ft_strnstr: %s\n", result);
//	else
//		printf("Not found");
//	return (0);
//}
