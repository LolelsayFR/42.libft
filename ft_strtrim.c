/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 16:18:20 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimcount(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	trim_count;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	trim_count = ft_trimcount(s1, set);
	result = malloc((trim_count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[i], trim_count + 1);
	return (result);
}

//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	char	*result;
//
//	result = ft_strtrim("Ft42 Test de fou lalalalala FFFtFFt44442222", "Ft42");
//	if (result)
//		printf("ft_strtrim: %s\n", result);
//	return (0);
//}
