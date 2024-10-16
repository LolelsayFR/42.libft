/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/16 18:11:01 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strreverse(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = ft_strlen(str);
	j = 0;
	dest = malloc(i * sizeof(char));
	while (i > 0)
	{
		dest[j] = str[i];
		i--;
		j++;
	}
	return (dest);
}

static int	ft_intlen(int n)
{
	int	count;

	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	i = 0;
	if (n < 0)
		sign = 1;
	str = malloc((ft_intlen(n) + sign + 1) * sizeof(char));
	if (sign == 1)
	{
		str[0] = '-';
		n -= -n;
		i++;
	}
	while (n > 9)
	{
		str[i++] = n % 10;
		n /= 10;
	}
	str[i] = '\0';
	return (ft_strreverse(str));
}
