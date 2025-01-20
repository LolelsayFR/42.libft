/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 13:22:14 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_substr_lst(char *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	size_t			strlen;

	strlen = ft_strlen(s);
	if (start >= strlen)
		len = 0;
	else if (len > strlen - start)
		len = strlen - start;
	dest = ft_calloc((len + 1), sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	ft_lstadd_back(ft_alist(), ft_lstnew(dest));
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	char	*result;
//
//	result = ft_substr("Ft42 Test de fou lalalala FFFtFFt44442222", 5, 11);
//	if (result)
//		printf("ft_substr: %s\n", result);
//	return (0);
//}
