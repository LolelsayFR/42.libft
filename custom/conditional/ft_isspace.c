/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaillet <emaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 04:03:58 by emaillet          #+#    #+#             */
/*   Updated: 2025/01/19 06:00:03 by emaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int i)
{
	return (i == ' ' || i == '\t' || i == '\n'
		|| i == '\v' || i == '\f' || i == '\r');
}
