/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:58:17 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 02:20:28 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//#include "stdio.h"
//
//void	ft_repbyx(unsigned int c, char *s)
//{
//	s[c] = 'x';
//}
//
//int	main(void)
//{
//	static char	src[7] = "Bernard";
//
//	ft_striteri(src, ft_repbyx);
//	printf("%s", src);
//	return (0);
//}
