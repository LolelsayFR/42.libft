/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/20 21:47:47 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimcount(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(s1);
	i = size;
	while (ft_strchr(set, s1[i]))
	{
		i--;
		size--;
	}
	i = 0;
	while (ft_strchr(set, s1[i]))
	{
		i++;
		size--;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	dest = malloc((ft_trimcount(s1, set) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_trimcount(s1, set) - 1)
	{
		while (ft_strchr(set, s1[j]))
			j++;
		dest[i] = s1[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
