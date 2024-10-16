/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/17 01:02:10 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*local_s1;
	const unsigned char	*local_s2;

	local_s1 = s1;
	local_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (!(local_s1[i] == local_s2[i]))
			return (local_s1[i] - local_s2[i]);
		i++;
	}
	return (0);
}
