/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:27:02 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;

	if (!s || !f)
		return (NULL);
	dst = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

//#include "stdio.h"
//
//char	ft_repbyx(unsigned int c, char s)
//{
//	(void)c;
//	s = 'x';
//	return (s);
//}
//
//int	main(void)
//{
//	static char	src[7] = "Bernard";
//
//	printf("%s", ft_strmapi(src, ft_repbyx));
//	return (0);
//}
