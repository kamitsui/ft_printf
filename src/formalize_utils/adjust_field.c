/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_field.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:34:14 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 11:14:00 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_field(const char *str, t_sm *machine)
{
	if ((machine->flag & BIT_PREC) != FALSE)
		adjust_prec(str, machine);
	else
		adjust_width(str, machine);
}
//better type
//#include <stdlib.h>
//	size_t	len;
//debug code
//#include <stdio.h>// for debug
//	printf("%d:width\n", machine->width);// for debug
//	printf("%d:precision\n", machine->prec);// for debug
//	printf("%d:len\n", len);// for debug
//	printf("%s:str\n", str);// for debug
//	char *flag_bin = (char *)ft_itoa_binary(machine->flag);// for debug
//	printf("%s:flag_bin\t%#x:flag\n", flag_bin, machine->flag);// for debug
//	free(flag_bin);// for debug
