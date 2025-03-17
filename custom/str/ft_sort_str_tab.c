/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 03:57:51 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/14 04:12:37 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_minimum(char **tab, int start, int size)
{
	char	*minimum;
	int		index;

	minimum = tab[start];
	index = start;
	while (++start < size)
	{
		if (ft_strcmp(minimum, tab[start]) > 0)
		{
			minimum = tab[start];
			index = start;
		}
	}
	return (index);
}

void	ft_sort_str_tab(char **tab)
{
	char	*temp;
	int		temp_index;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (tab[size] != NULL)
		size++;
	while (i < size)
	{
		temp_index = ft_minimum(tab, i, size);
		temp = tab[temp_index];
		tab[temp_index] = tab[i];
		tab[i] = temp;
		i++;
	}
}
