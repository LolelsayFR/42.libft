/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/21 11:06:30 by emaillet         ###   ########.fr       */
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

char	*ft_ltoa_lst(long n)
{
	int			count;
	long long	long_n;
	char		*str;
	int			sign;

	long_n = (long long) n;
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
	ft_lstadd_back(ft_alist(), ft_lstnew(str));
	return (str);
}
