/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequence_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:03:38 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 19:04:05 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"
#include <stddef.h>

void	sequence_unsigned(char *str, t_sm *machine)
{
	size_t	len;
	size_t	offset;

	len = ft_strlen(str);
	if (len > machine->prec)
		pad_width(machine, len);
	else
	{
		offset = machine->prec;
		pad_width(machine, offset);
		pad_prec(machine, len);
	}
	pad_n_str(str, machine, len);
}
