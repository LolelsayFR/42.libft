/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:12:41 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:44:10 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printfd.h"

size_t	ft_putmem_fd(int fd, void *m)
{
	uintptr_t	ptr;
	size_t		count;

	ptr = (long)m;
	count = 0;
	if (ptr == 0)
		count += ft_putstr_re_fd(fd, "(nil)");
	else if (!ptr)
		count += ft_putstr_re_fd(fd, "0x0");
	else
	{
		count += ft_putstr_re_fd(fd, "0x");
		count += ft_puthexa_fd(fd, *(&ptr), 'x');
	}
	return (count);
}
