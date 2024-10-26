/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 16:14:25 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*local_temp;

	local_temp = s;
	i = 0;
	while (i < n)
	{
		if (local_temp[i] == (unsigned char)c)
			return ((void *)(local_temp + i));
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	const char	*str = "Hello, World!";
//	const int	c = 'o';
//	void		*result;
//
//	result = ft_memchr(str, c, 13);
//	if (result)
//		printf("ft_memchr: '%c' in \"%s\": %s\n",
//			c, str, (char *)result);
//	else
//		printf("ft_memchr: '%c' not found \"%s\"\n",
//			c, str);
//	return (0);
//}
