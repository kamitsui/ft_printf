/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_field_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:22:52 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/20 10:20:47 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"
#include <limits.h>

static int	set_value(char *input, t_sm *machine)
{
	int	size;
	int	num;

	size = 0;
	num = 0;
	while (ft_isdigit(input[size]))
	{
		if ((num > INT_MAX / 10) || (input[size] - '0' > INT_MAX % 10))
		{
			machine->state = ERROR;
			return (-1);
		}
		num *= 10;
		num += input[size] - '0';
		size++;
	}
	if ((machine->flag & BIT_PREC) != FALSE)
		machine->prec = num;
	else
		machine->width = num;
	return (size);
}

int	get_field_nbr(char *input, t_sm *machine)
{
	int	num;
	int	size;

	num = 0;
	size = 0;
	if (*input == '0')
	{
		machine->state = ERROR;
		return (-1);
	}
	size = set_value(input, machine);
	return (size);
}
