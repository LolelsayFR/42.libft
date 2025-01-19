/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:12:33 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:50:22 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printfd.h"

size_t	ft_puthexa_fd(int fd, unsigned long nb, char c)
{
	char	*base;
	int		result;

	result = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb >= 16)
		result += ft_puthexa_fd(fd, nb / 16, c);
	result += ft_putchar_re_fd(fd, base[nb % 16]);
	return (result);
}
