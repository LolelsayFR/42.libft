/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:57:51 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*set;

	set = s;
	i = 0;
	while (i < n)
	{
		set[i] = c;
		i++;
	}
	return (s);
}

//#include <stdio.h>
//#include <strings.h>
//#include <string.h>
//
//int	main(void)
//{
//	const char	buffer1[10] = "abcdefghi";
//	const char	buffer2[10] = "abcdefghi";
//	size_t		i;
//
//	i = 0;
//	memset((void *)buffer1, '\0', 5);
//	ft_memset((void *)buffer2, '\0', 5);
//	printf("Original memset: ");
//	while (i < sizeof(buffer1))
//		printf("%02X ", (unsigned char)buffer1[i++]);
//	printf("\nft_memset:       ");
//	i = 0;
//	while (i < sizeof(buffer2))
//		printf("%02X ", (unsigned char)buffer2[i++]);
//	if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0)
//		printf("\n\033[32m[OK]\033[0m\n");
//	else
//		printf("\n\033[31m[KO]\033[0m\n");
//	return (0);
//}
