/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:17:05 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 19:07:05 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"
#include <stddef.h>

//static void	sequence_unsigned(char *str, t_sm *machine)
//{
//	size_t	len;
//	size_t	offset;
//
//	len = ft_strlen(str);
//	if (len > machine->prec)
//		pad_width(machine, len);
//	else
//	{
//		offset = machine->prec;
//		pad_width(machine, offset);
//		pad_prec(machine, len);
//	}
//	pad_n_str(str, machine, len);
//}
//
//static void	sequence_signed(char *str, t_sm *machine)
//{
//	size_t	len;
//	size_t	offset;
//
//	len = ft_strlen(str);
//	if (len > machine->prec)
//	{
//		pad_width(machine, len);
//		pad_n_str(str, machine, len);
//	}
//	else
//	{
//		offset = machine->prec + 1;
//		pad_width(machine, offset);
////	if (machine->state == ERROR)
////		return ;
//		add_to_buff(str[0], machine);
////	if (machine->state == ERROR)
////		return ;
//		pad_prec(machine, len);
//		pad_n_str(&str[1], machine, len - 1);
//	}
//}
//
void	adjust_number(char *str, t_sm *machine)
{
	if (ft_isdigit(*str) == TRUE)
		sequence_unsigned(str, machine);
		//unshift_sign(str, machine);
	else
		sequence_signed(str, machine);
		//shift_sign(str, machine);
}
