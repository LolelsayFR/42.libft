/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftplus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:19:12 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 05:23:55 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPLUS_H
# define LIBFTPLUS_H
# include "libftplus_macro.h"
# include "../libft.h"

long		ft_atol(const char *str);
size_t		ft_printf(const char *s, ...);
size_t		ft_printfd(int fd, const char *s, ...);
char		*get_next_line(int fd);
char		*ft_ltoa(long n);
int			ft_free_tab(void **tab);
int			ft_isspace(int c);
int			ft_islower(int c);
int			ft_isupper(int c);

#endif
