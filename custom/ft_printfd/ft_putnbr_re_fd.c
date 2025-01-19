/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_re.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:43:12 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 04:44:52 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printfd.h"

size_t	ft_putnbr_re_fd(int fd, int i)
{
	char	*s;
	int		j;

	j = 0;
	s = ft_ltoa(i);
	while (s[j])
		j++;
	write(fd, s, j);
	free(s);
	return (j);
}

size_t	ft_putnbr_uns_fd(int fd, unsigned int i)
{
	char	*s;
	int		j;

	j = 0;
	s = ft_ltoa(i);
	while (s[j])
		j++;
	write(fd, s, j);
	free(s);
	return (j);
}
