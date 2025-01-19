/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 03:07:31 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_intcount(int n)
{
	int	result;

	result = 0;
	if (n < 0)
	{
		n = -n;
		result = 1;
	}
	if (n == 0)
		result = 1;
	else
	{
		while (n)
		{
			n = n / 10;
			result++;
		}
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		count;
	long	long_n;
	char	*str;
	int		sign;

	long_n = (long) n;
	count = ft_intcount(long_n);
	str = ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (NULL);
	sign = 0;
	if (long_n < 0)
	{
		long_n = -long_n;
		str[0] = '-';
		sign = 1;
	}
	str[count] = '\0';
	while (count > sign)
	{
		str[--count] = long_n % 10 + '0';
		long_n /= 10;
	}
	return (str);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(void)
//{
//	const int	n[] = {0, 42, -42, 2147483647, -2147483648};
//	size_t		count;
//	size_t		i;
//	char		*result;
//
//	count = 5;
//	i = 0;
//	while (i < count)
//	{
//		result = ft_itoa(n[i]);
//		if (result)
//		{
//			printf("\033[32m[ok]\033[0m t_itoa(%d) = '%s'\n", n[i], result);
//			free(result);
//		}
//		i++;
//	}
//	return (0);
//}
