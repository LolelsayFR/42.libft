/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:18:43 by emaillet          #+#    #+#             */
/*   Updated: 2024/11/03 20:42:52 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

size_t	ft_printf(const char *s, ...);
size_t	ft_puthexa(unsigned long nb, char c);
size_t	ft_putmem(void *m);
size_t	ft_putchar_re(char c);
size_t	ft_putnbr_re(int i);
size_t	ft_putnbr_uns(unsigned int i);
size_t	ft_putstr_re(char *s);
char	*ft_ltoa(long n);

#endif
