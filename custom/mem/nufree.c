/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nufree.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:51:33 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/20 12:52:12 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	nufree(void *ptr)
{
	free(ptr);
	ptr = NULL;
}
