/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 22:44:06 by emaillet         ###   ########.fr       */
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
	if (dest == src || n == 0)
		return (dest);
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

//#include "stdio.h"
//
//int	main(void)
//{
//	static char	src[7] = "Bernard";
//	static char	*dest;
//
//	dest = src + 3;
//	ft_memmove(dest, src, 7);
//	printf("%s", dest);
//	return (0);
//}
