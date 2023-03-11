/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_buff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:03:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/11 17:05:52 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	add_to_buff(char c, t_sm *machine)
{
	if (machine->len == 4096)
	{
		machine->out = ft_strjoin_free(machine->out, machine->buffer);
		if (machine->out == NULL)
		{
			machine->state = ERROR;
			return ;
		}
		ft_bzero(&machine->buffer, 4096);
		machine->len = 0;
		machine->out_size++;
	}
	machine->buffer[machine->len] = c;
	machine->len++;
	machine->out_size++;
}
