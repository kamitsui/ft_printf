/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:19:22 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/02 16:34:29 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>// delete this !!!!!!!!!!! written for debug
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	process(char *input, t_state_machine *machine)
{
	static t_f_process	f_process[4] = {letter, flag, conv, error};
	int					ret;

	//while (machine.state != END)
	while (*input != '\0' && input != NULL)
	{
		if ((ret = f_process[machine->state](input, machine)) >= 0)
			input += ret;
	}
//	machine.out = ft_strjoin_free(machine.out, machine.buffer);
//	printf("printf(out):\t\t\t%s\n", machine.out);
//	printf("write(1, out, size):\t");
//	write(1, machine.out, machine.out_size);
//	printf("\n");
//	free(machine.out);
//	printf("printf(out):\t\t\t%s\tafter free\n", machine.out);
}
