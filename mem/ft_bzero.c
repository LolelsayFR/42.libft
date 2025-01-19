/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:58:20 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*set;

	set = s;
	i = 0;
	while (i < n)
	{
		set[i] = '\0';
		i++;
	}
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
//	bzero((void *)buffer1, 5);
//	ft_bzero((void *)buffer2, 5);
//	printf("Original bzero: ");
//	while (i < sizeof(buffer1))
//		printf("%02X ", (unsigned char)buffer1[i++]);
//	printf("\nft_bzero:       ");
//	i = 0;
//	while (i < sizeof(buffer2))
//		printf("%02X ", (unsigned char)buffer2[i++]);
//	if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0)
//		printf("\n\033[32m[OK]\033[0m\n");
//	else
//		printf("\n\033[31m[KO]\033[0m\n");
//	return (0);
//}
