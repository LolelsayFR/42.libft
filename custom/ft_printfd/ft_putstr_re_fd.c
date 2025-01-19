/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_re.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:43:06 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:45:15 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printfd.h"

size_t	ft_putstr_re_fd(int fd, char *s)
{
	int	i;

	if (!s)
		return (write(fd, "(null)", 6));
	i = 0;
	while (s[i])
		i++;
	return (write(fd, s, i));
}
