/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:41:22 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 21:57:26 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

static void	pad_zero(t_sm *machine, size_t offset)
{
	size_t	i;

	i = 0;
	while (((i + offset) < machine->width) && (machine->state != ERROR))
	{
		add_to_buff('0', machine);
		i++;
	}
}

static void	pad_space(t_sm *machine, size_t offset)
{
	size_t	i;

	i = 0;
	while (((i + offset) < machine->width) && (machine->state != ERROR))
	{
		add_to_buff(' ', machine);
		i++;
	}
}

void	pad_width(t_sm *machine, size_t offset)
{
	if (((machine->flag & BIT_ZERO) != FALSE)
		&& ((~machine->flag & BIT_LEFT) != FALSE)
		&& ((~machine->flag & (BIT_ZERO | BIT_PREC)) != FALSE))
		pad_zero(machine, offset);
	else
		pad_space(machine, offset);
}
