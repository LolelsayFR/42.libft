/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/16 03:23:19 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*local_dest;
	unsigned const char	*local_temp;

	local_dest = dest;
	local_temp = src;
	if (!dest || !src)
		return (NULL);
	if (!(dest > src && dest < (src + n)))
	{
		i = 0;
		while (i < n)
		{
			local_dest[i] = local_temp[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			local_dest[i] = local_temp[i];
	}
	return (dest);
}
