/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:12:33 by emaillet          #+#    #+#             */
/*   Updated: 2024/11/03 20:45:45 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexa(unsigned long nb, char c)
{
	char	*base;
	int		result;

	result = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb >= 16)
		result += ft_puthexa(nb / 16, c);
	result += ft_putchar_re(base[nb % 16]);
	return (result);
}
