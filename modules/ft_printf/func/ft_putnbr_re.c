/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_re.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:43:12 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/31 23:58:29 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_re(int i)
{
	char	*s;
	int		j;

	j = 0;
	s = ft_ltoa(i);
	while (s[j])
		j++;
	write(1, s, j);
	free(s);
	return (j);
}

size_t	ft_putnbr_uns(unsigned int i)
{
	char	*s;
	int		j;

	j = 0;
	s = ft_ltoa(i);
	while (s[j])
		j++;
	write(1, s, j);
	free(s);
	return (j);
}
