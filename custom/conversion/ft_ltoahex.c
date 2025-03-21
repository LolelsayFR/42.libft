/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoahex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:06:38 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/21 11:21:50 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_hexcount(long n)
{
	int	result;

	result = 0;
	if (n == 0)
		result = 1;
	else
	{
		while (n)
		{
			n = n / 16;
			result++;
		}
	}
	return (result);
}

char	*ft_ltoahex(long n)
{
	int			count;
	long		long_n;
	char		*str;
	const char	*base = "0123456789ABCDEF";

	long_n = (long long) n;
	count = ft_hexcount(long_n);
	str = ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count > 0)
	{
		str[--count] = base[long_n % 16];
		long_n /= 16;
	}
	return (str);
}

char	*ft_ltoahex_lst(long n)
{
	int			count;
	long		long_n;
	char		*str;
	const char	*base = "0123456789ABCDEF";

	long_n = (long long) n;
	count = ft_hexcount(long_n);
	str = ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count > 0)
	{
		str[--count] = base[long_n % 16];
		long_n /= 16;
	}
	ft_lstadd_back(ft_alist(), ft_lstnew(str));
	return (str);
}
