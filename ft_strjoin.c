/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:01 by emaillet          #+#    #+#             */
/*   Updated: 2024/10/16 21:10:59 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		i;
	char	*dest;

	count = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = malloc(count * sizeof(char));
	i = -1;
	while (s1[i++] && count-- > 0)
		dest[i] = s1[i];
	while (s2[i++] && count-- > 0)
		dest[i] = s2[i];
	i++;
	dest[i] = '\0';
	return (dest);
}
