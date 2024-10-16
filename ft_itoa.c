/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/16 15:58:58 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	str = malloc((ft_intlen(n) + sign) * sizeof(char));
	if (sign == 1)
	{
		str[0] = '-';
		i++;
	}
	while (n > 9)
	{
		str[i] = n % 10;
		n /= 10;
		i++;
	}
	return (str);
}
