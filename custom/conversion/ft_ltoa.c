/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 06:00:25 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_intcount(long n)
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

char	*ft_ltoa(long n)
{
	int		count;
	long	long_n;
	char	*str;
	int		sign;

	long_n = (long long) n;
	count = ft_intcount(long_n);
	str = malloc((count + 1) * sizeof(char));
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
