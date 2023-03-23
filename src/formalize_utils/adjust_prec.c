/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_prec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:17:05 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 10:33:03 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"

void	adjust_prec(char *str, t_sm *machine)
{
	if ((machine->flag & BIT_S) != FALSE)
		adjust_string(str, machine);
	else
		adjust_number(str, machine);
}
