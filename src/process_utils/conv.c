/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:43:25 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/01 18:02:30 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include <stdio.h>// delete this !!!!!!!!!! witten for debug
int	conv(char *input, t_state_machine *machine)
{
	static char	*str_conv;
	int			i;

	str_conv = ALL_CONV;
	i = 0;
	while (i < NB_CONV)
	{
		if (ft_strnequ(input, str_conv + i, 1) == TRUE)
		{
			machine->flag |= (1 << i) << 8;
			printf("cur = '%c' | state = CONV \t| flag = %s (%d)\n", *input, ft_itoa_binary(machine->flag), machine->flag);
			//conversion(machine);
			printf("buffer: %s\t after conversion\n", machine->buffer);// delete this !!!!!!!!!! witten for debug
			machine->flag = 0;
			machine->state = LETTER;
			return (1);
		}
		i++;
	}
	machine->state = ERROR;
	return (0);
}
