/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_va_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:44:14 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/20 17:42:01 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "va_arg.h"
#include <stdio.h>//for debug
#include "libft.h"//for debug

unsigned long long	u_va_arg(t_sm *machine)
{
	unsigned long long	num;
	int					i;
	static t_f_u_va_arg	f_u_va_arg[5] = {u_hh, u_ll, u_h, u_l, u_int};

//	printf("%d:flag\n", machine->flag);
	i = 0;
	while (i < NB_PREFIX)
	{
		if ((machine->flag & (1 << i << 8)) != FALSE)
		{
			num = f_u_va_arg[i](machine);
			return (num);
		}
		i++;
	}
	num = (unsigned long long)f_u_va_arg[i](machine);
	return (num);
}
