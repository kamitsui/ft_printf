/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequence_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:04:40 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 19:05:34 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"
#include <stddef.h>

void	sequence_signed(char *str, t_sm *machine)
{
	size_t	len;
	size_t	offset;

	len = ft_strlen(str);
	if (len > machine->prec)
	{
		pad_width(machine, len);
		pad_n_str(str, machine, len);
	}
	else
	{
		offset = machine->prec + 1;
		pad_width(machine, offset);
//	if (machine->state == ERROR)
//		return ;
		add_to_buff(str[0], machine);
//	if (machine->state == ERROR)
//		return ;
		pad_prec(machine, len);
		pad_n_str(&str[1], machine, len - 1);
	}
}
