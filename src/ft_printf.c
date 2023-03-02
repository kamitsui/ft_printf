/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:49:27 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/02 16:35:40 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>// written for debug.  don't forget delete !!!!!!!!!!!!!!
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

void	ft_printf(char *input, ...)
{
	t_state_machine	machine;
	va_list			ap;

	va_start(ap, input);
	machine.ap = &ap;
	machine.state = LETTER;
	machine.len = 0;
	machine.flag = 0;
	ft_bzero((void *)&machine.buffer, (size_t)4096);
	machine.out = ft_strnew(1);
	process(input, &machine);
	machine.out = ft_strjoin_free(machine.out, machine.buffer);
	printf("printf(out):\t\t\t%s\tbefore free\n", machine.out);
	printf("write(1, out, size):\t");
	write(1, machine.out, machine.out_size);
	printf("\n");
	free(machine.out);
	printf("printf(out):\t\t\t%s\tafter free\n", machine.out);
	va_end(ap);
}
