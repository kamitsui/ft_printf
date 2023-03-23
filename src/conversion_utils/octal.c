/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:41:56 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 18:48:21 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "va_arg.h"
#include "formalize.h"

void	octal(t_sm *machine)
{
	char				str[42];
	unsigned long long	num;
	int					base;

	ft_bzero(str, 42);//42 is not better  >> xx_SIZE
	base = 010;
	num = u_va_arg(machine);
	if ((machine->flag & BIT_HASH) != FALSE)
	{
		adjust_hash(str, machine);
		itoa_buff(num, &str[1], base, machine);
	}
	else
		itoa_buff(num, str, base, machine);
	formalize(str, machine);
}
//this code moved to formalize.c
//	size_t				len;
//	size_t				i;
//	len = ft_strlen(str);
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
