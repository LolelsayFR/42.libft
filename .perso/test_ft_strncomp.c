/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncomp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:08:22 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/07 10:27:15 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	res;
	int	og;

	og = strncmp(argv[1], argv[2], atoi(argv[3]));
	res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	if (res == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else if (res < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
	if (og == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else if (og < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", og);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", og);
	}
}
