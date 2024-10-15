/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/15 18:32:29 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*local_s1;
	const unsigned char	*local_s2;

	local_s1 = s1;
	local_s2 = s2;
	i = 0;
	while ((i < n) && (local_s1[i] || local_s2[i]))
	{
		if (!(local_s1[i] == local_s2[i]))
			return (local_s1[i] - local_s2[i]);
		i++;
	}
	return (0);
}
