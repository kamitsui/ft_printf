/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:41:02 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/10 22:34:22 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"

void	character(t_sm *machine)
{
	char	c;

	c = (char)va_arg(*(machine->ap), int);
	if (c == 0x0)
		return ;
	add_to_buff(c, machine);
}
