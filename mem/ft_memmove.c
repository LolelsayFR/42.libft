/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 03:00:48 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long	i;

	if (dst < src)
	{
		i = 0;
		while ((size_t)i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
		return (dst);
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
		return (dst);
	}
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
