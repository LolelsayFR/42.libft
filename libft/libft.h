/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:47:36 by emaillet          #+#    #+#             */
/*   Updated: 2024/09/23 17:07:13 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int	ft_strlen(char *str);
int	ft_atoi(char *str);
#endif
