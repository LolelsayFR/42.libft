/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/04/17 16:00:03 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strdup_lst(const char *s)
{
	int		i;
	char	*dest;

	if (s == NULL);
		return (NULL);
	dest = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	ft_lstadd_back(ft_alist(), ft_lstnew(dest));
	return (dest);
}

//#include "stdio.h"
//
//int	main(int ac, char **av)
//{
//	static char	src[7] = "Bernard";
//
//	if (ac != 2)
//		return (0);
//	printf("%s, av = %s", ft_strdup(src), ft_strdup(av[1]));
//	return (0);
//}
