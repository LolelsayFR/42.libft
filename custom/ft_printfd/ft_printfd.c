/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:24:31 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:39:52 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printfd.h"

static size_t	ft_form_fd(int fd, va_list args, const char c)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_putchar_re_fd(fd, va_arg(args, int));
	else if (c == 's')
		print_length += ft_putstr_re_fd(fd, va_arg(args, char *));
	else if (c == 'p')
		print_length += ft_putmem_fd(fd, va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		print_length += ft_putnbr_re_fd(fd, va_arg(args, int));
	else if (c == 'u')
		print_length += ft_putnbr_uns_fd(fd, va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		print_length += ft_puthexa_fd(fd, va_arg(args, unsigned int), c);
	else if (c == '%')
		print_length += ft_putchar_re_fd(fd, '%');
	return (print_length);
}

size_t	ft_printfd(int fd, const char *s, ...)
{
	int		i;
	size_t	len;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_form_fd(fd, args, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar_re_fd(fd, s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

//#include <string.h>
//#include <stdio.h>
//
//int	main(void)
//{
//	int			i;
//	const char	*test = strdup("test");
//
//	i = ft_printf("\n---FtPrintf---\n");
//	ft_printf("Test Char : %c\n", 'c');
//	ft_printf("Test String : %s\n", test);
//	ft_printf("Test Pointer : %p\n", test);
//	ft_printf("Test Decimal : %d\n", i);
//	ft_printf("Test Int : %i\n", i);
//	ft_printf("Test Unsigned Int : %u\n", i);
//	ft_printf("Test Hexa Lower : %x\n", i);
//	ft_printf("Test Hexa Upper : %X\n", i);
//	ft_printf("Test %% : %%%%%%%%%%\n");
//	i = printf("\n---OgPrintf---\n");
//	printf("Test Char : %c\n", 'c');
//	printf("Test String : %s\n", test);
//	printf("Test Pointer : %p\n", test);
//	printf("Test Decimal : %d\n", i);
//	printf("Test Int : %i\n", i);
//	printf("Test Unsigned Int : %u\n", i);
//	printf("Test Hexa Lower : %x\n", i);
//	printf("Test Hexa Upper : %X\n", i);
//	printf("Test %% : %%%%%%%%%%\n");
//	return (0);
//}
