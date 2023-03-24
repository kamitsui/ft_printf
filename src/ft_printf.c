/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:49:27 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 21:28:22 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

static void	initialize_machine(t_sm *machine, va_list *ap)
{
	machine->state = LETTER;
	machine->ap = ap;
	ft_bzero((void *)&machine->buffer, (size_t)4096);
	machine->out = ft_strnew(1);
	ft_bzero((void *)machine->out, 1);
	machine->out_size = 0;
	machine->len = 0;
	machine->flag = 0x0;
	machine->width = 0;
	machine->prec = 0;
}

char	*join_to_out(const char *s1, const char *s2, size_t len2)
{
	char	*str;
	size_t	len1;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	len1 = ft_strlen(s1);
	str = ft_strnew(len1 + len2);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len1 + 1);
	ft_memcpy(&str[len1], s2, len2);
	//ft_strlcat(str, s2, len1 + len2 + 1);
	free((void *)s1);
	return (str);
}

int	ft_printf(const char *input, ...)
{
	t_sm	machine;
	va_list	ap;

	va_start(ap, input);
	initialize_machine(&machine, &ap);
	process(input, &machine);
	if (machine.state != ERROR)
	{
		//machine.out = ft_strjoin_free(machine.out, machine.buffer);
		machine.out = join_to_out(machine.out, machine.buffer, machine.len);
		if (machine.out == NULL)
			return (-1);
		machine.out_size = write(1, machine.out, machine.out_size);
	}
	free(machine.out);
	va_end(ap);
	if (machine.state == ERROR)
		return (-1);
	return (machine.out_size);
}
//#include <stdio.h>// written for debug.  don't forget delete !!!!!!
//	degug code in initialize_machine function
//	printf("-------- initialize -------\n");
//	printf("ap (%p) || state (%d) || ", machine->ap, machine->state);
//	printf("len (%d) || buffer (%s) || buff_size (%lu) || ",
//			machine->len, machine->buffer, sizeof(machine->buffer));
//	char *flag_bin = ft_itoa_binary(machine->flag);
//	printf("flag (%d) (b0%s) || ", machine->flag, flag_bin);
//	free(flag_bin);
//	printf("out (%s) || out_size (%d) || out_size (%lu)\n",
//			machine->out, machine->out_size, sizeof(machine->out));
//	debug code in ft_printf
//	printf("------- process finished ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
//	printf("------- strjoin_free finished ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
//	printf("+++++++ write of ft_printf +++++++\n");
//	printf("\n------- after free ------\n");
//	printf("buffer (%s) || out (%s)\n", machine.buffer, machine.out);
