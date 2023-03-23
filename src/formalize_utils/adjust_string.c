/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:20:18 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 17:06:25 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_string(char *str, t_sm *machine)
{
	size_t	len;

	len = ft_strlen(str);
	if (len > machine->prec)
		len = machine->prec;
	if ((machine->flag & BIT_LEFT) != FALSE)
	{
		pad_n_str(str, machine, len);
		pad_width(machine, len);
	}
	else
	{
		pad_width(machine, len);
		pad_n_str(str, machine, len);
	}
}
//this code moved to pad_width.c
//	size_t	i;
//	i = 0;
//	while (len + i < machine->width && (machine->state != ERROR))
//	{
//		add_to_buff(' ', machine);
//		i++;
//	}
//this code moved to pad_n_str.c
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
//debug code
//#include <stdio.h>// for debug
//	printf("%d:width\n", machine->width);// for debug
//	printf("%d:precision\n", machine->prec);// for debug
//	printf("%d:len\n", len);// for debug
//	printf("%s:str\n", str);// for debug
//	char *flag_bin = (char *)ft_itoa_binary(machine->flag);// for debug
//	printf("%s:flag_bin\t%#x:flag\n", flag_bin, machine->flag);// for debug
//	free(flag_bin);// for debug
