/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:50:52 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/18 02:17:26 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strreverse(const char *s)
{
	char	*dest;
	int		i;

	i = (int)ft_strlen(s);
	return (dest);
}

char	*ft_strrchr(const char *s, int c)
{
	return (ft_strchr(ft_strreverse(s), c));
}
