/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequence_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:03:38 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 14:52:20 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"
#include <stddef.h>

static void	seq_u_right(const char *str, t_sm *machine)
{
	size_t	len;
	size_t	offset;

	len = ft_strlen(str);
	offset = machine->prec;
	if (len > machine->prec)
		offset = len;
	pad_width(machine, offset);
	if (machine->state == ERROR)
		return ;
	pad_prec(machine, len + 1);
	if (machine->state == ERROR)
		return ;
	pad_n_str(str, machine, len);
}

static void	seq_u_left(const char *str, t_sm *machine)
{
	size_t	len;
	size_t	offset;

	len = ft_strlen(str);
	offset = machine->prec;
	if (len > machine->prec)
		offset = len;
	pad_prec(machine, len);
	if (machine->state == ERROR)
		return ;
	pad_n_str(str, machine, len + 1);
	if (machine->state == ERROR)
		return ;
	pad_width(machine, offset);
}

void	sequence_unsigned(const char *str, t_sm *machine)
{
	if ((machine->flag & BIT_LEFT) != FALSE)
		seq_u_left(str, machine);
	else
		seq_u_right(str, machine);
}
//this code is error handle
//	if (machine->state == ERROR)
//		return ;
