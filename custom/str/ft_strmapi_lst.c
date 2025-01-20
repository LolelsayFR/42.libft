/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 15:26:07 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strmapi_lst(const char *s, char (*f)(unsigned int, char))
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
	ft_lstadd_back(ft_alist(), ft_lstnew(dst));
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
