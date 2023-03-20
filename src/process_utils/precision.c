/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:09:53 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/19 16:00:29 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"

int	precision(char *input, t_sm *machine)
{
	static char	*str_prec;
	int			size;

	str_prec = FIELD_PREC;
	size = 0;
	if (input[size] == *str_prec)
	{
		machine->flag |= BIT_PREC;
		size++;
		size = get_field_nbr(input, machine);
		if (size == -1)
			return (size);
	}
	return (size);
}
