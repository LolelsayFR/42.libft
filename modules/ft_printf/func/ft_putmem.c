/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:12:41 by emaillet          #+#    #+#             */
/*   Updated: 2024/11/12 20:54:57 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putmem(void *m)
{
	uintptr_t	ptr;
	size_t		count;

	ptr = (long)m;
	count = 0;
	if (ptr == 0)
		count += ft_putstr_re("(nil)");
	else if (!ptr)
		count += ft_putstr_re("0x0");
	else
	{
		count += ft_putstr_re("0x");
		count += ft_puthexa(*(&ptr), 'x');
	}
	return (count);
}
