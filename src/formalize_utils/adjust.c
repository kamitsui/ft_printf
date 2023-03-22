/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:29:09 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:13:32 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "formalize.h"

void	adjust(char *str, t_sm *machine)
{
	if ((machine->flag & (BIT_WIDTH | BIT_PREC)) != FALSE)
		adjust_field(str, machine);
//	else if ((machine->flag & (BIT_SPACE | BIT_PLUSE)) != FALSE)
//		adjust_sign(str, machine);
//	else
//		adjust_base(str, machine);
}
