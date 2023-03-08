/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:49:27 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/08 15:12:23 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>// written for debug.  don't forget delete !!!!!!!!!!!!!!
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

static void initialize_machine(t_state_machine *machine, va_list *ap)
{
	machine->ap = ap;
	machine->state = LETTER;
	machine->len = 0;
	machine->flag = 0x0;// note flag view
	ft_bzero((void *)&machine->buffer, (size_t)4096);
	machine->out = ft_strnew(1);
	ft_bzero((void *)machine->out, 1);
	machine->out_size = 0;
//	degug code
//	printf("-------- initialize -------\n");
//	printf("ap (%p) || state (%d) || ", machine->ap, machine->state);
//	printf("len (%d) || buffer (%s) || buff_size (%lu) || ", machine->len, machine->buffer, sizeof(machine->buffer));
//	char *flag_bin = ft_itoa_binary(machine->flag);
//	printf("flag (%d) (b0%s) || ", machine->flag, flag_bin);
//	free(flag_bin);
//	printf("out (%s) || out_size (%d) || out_size (%lu)\n", machine->out, machine->out_size, sizeof(machine->out));
}

int	ft_printf(char *input, ...)
{
	t_state_machine	machine;
	va_list			ap;

	va_start(ap, input);
	initialize_machine(&machine, &ap);
	process(input, &machine);
//	debug code
//	printf("------- process finished ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
	machine.out = ft_strjoin_free(machine.out, machine.buffer);
//	debug code
//	printf("------- strjoin_free finished ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
//	printf("+++++++ write of ft_printf +++++++\n");
	write(1, machine.out, machine.out_size);
	free(machine.out);
	machine.out = NULL;
//	debug code
//	printf("\n------- after free ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
	va_end(ap);
	return (machine.out_size);
}
