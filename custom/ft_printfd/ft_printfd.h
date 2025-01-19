/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:18:43 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:50:32 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTFD_H
# define FT_PRINTFD_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include "../libftplus.h"

size_t	ft_puthexa_fd(int fd, unsigned long nb, char c);
size_t	ft_putmem_fd(int fd, void *m);
size_t	ft_putchar_re_fd(int fd, char c);
size_t	ft_putnbr_re_fd(int fd, int i);
size_t	ft_putnbr_uns_fd(int fd, unsigned int i);
size_t	ft_putstr_re_fd(int fd, char *s);

#endif
