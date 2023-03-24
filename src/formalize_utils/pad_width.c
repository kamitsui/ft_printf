/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:41:22 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 09:22:04 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	pad_width(t_sm *machine, size_t offset)
{
	size_t	i;

	i = 0;
	if ((machine->flag & BIT_ZERO) != FALSE)
		while (i + offset < machine->width && (machine->state != ERROR))
		{
			add_to_buff('0', machine);
			i++;
		}
	else
		while (i + offset < machine->width && (machine->state != ERROR))
		{
			add_to_buff(' ', machine);
			i++;
		}
}
