/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:50:52 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 03:02:55 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		i--;
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
//	result = ft_strrchr(str, c);
//	if (result)
//		printf("ft_strrchr: '%c' in \"%s\": %s\n",
//			c, str, (char *)result);
//	else
//		printf("ft_strrchr: '%c' not found \"%s\"\n",
//			c, str);
//	return (0);
//}
