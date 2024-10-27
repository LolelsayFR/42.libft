/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 22:25:40 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **result, size_t j)
{
	while (j--)
		free(result[j]);
	free(result);
}

static size_t	ft_countab(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_splitinject(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
				return (ft_freeall(result, j), NULL);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_countab(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (ft_splitinject(s, c, result));
}

//int	main(int argc, char *argv[])
//{
//	char	**splited;
//
//	splited = NULL;
//	if (argc == 2)
//	{
//		splited = ft_split(argv[1], ' ');
//		while (*splited != NULL)
//		{
//			ft_putendl_fd(*splited, 1);
//			free(*splited);
//			splited++;
//		}
//		free(splited);
//	}
//	return (1);
//}
