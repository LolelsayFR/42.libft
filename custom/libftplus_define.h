/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftplus_define.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:18:26 by emaillet          #+#    #+#             */
/*   Updated: 2025/03/15 23:09:41 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPLUS_DEFINE_H
# define LIBFTPLUS_DEFINE_H

# define LFT_ERROR	-1
# define LFT_SUCCESS	1

# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define RES	"\x1B[0m\n"

# define LANG_E	"\x1b[48;2;100;0;0;1m[Error]\x1b[0m "
# define LANG_W	"\x1b[48;2;140;140;0;1m[Warning]\x1b[0m "

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef int	t_log_type;

typedef struct s_logs
{
	t_log_type		log_type;
	char			*log;
}	t_logs;

# define ALL_LOGS		-1
# define ERROR_LOGS		2
# define WARNING_LOGS	1
# define STANDARD_LOGS	0

#endif
