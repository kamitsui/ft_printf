/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:19:22 by kamitsui          #+#    #+#             */
/*   Updated: 2023/02/26 20:42:39 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"
#include "process.h"

void	process(char *input, t_state_machine machine)
{
	static t_f_process	f_process[4] = {letter, flag, conv, error};
	int					ret;

	while (machine.state == END)
	{
		if ((ret = f_process[machine.state](input, &machine)) >= 0)
			input += ret;
	}
	//ft_strjoin_free(out, machine->buffer);
	//write(1, out, size);
	//free(out);
}
