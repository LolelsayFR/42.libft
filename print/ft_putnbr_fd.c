/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/26 21:06:55 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;
	long	n_long;

	n_long = (long)n;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long = -n_long;
	}
	if (n_long > 9)
	{
		ft_putnbr_fd(n_long / 10, fd);
		ft_putnbr_fd(n_long % 10, fd);
		return ;
	}
	result = n_long + '0';
	write(fd, &result, 1);
}

//#include <stdlib.h>
//
//int	main(int argc, char *av[])
//{
//	if (argc == 2)
//		ft_putnbr_fd(atoi(av[1]), 1);
//	return (0);
//}
