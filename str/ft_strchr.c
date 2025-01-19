/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 03:03:12 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
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
//	result = ft_strchr(str, c);
//	if (result)
//		printf("ft_strchr: '%c' in \"%s\": %s\n",
//			c, str, (char *)result);
//	else
//		printf("ft_strchr: '%c' not found \"%s\"\n",
//			c, str);
//	return (0);
//}
