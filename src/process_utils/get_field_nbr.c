/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_field_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:22:52 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 16:19:54 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"
#include <limits.h>
#include <stddef.h>

static void	set_field_nbr(size_t num, t_sm *machine)
{
	if ((machine->flag & BIT_PREC) != FALSE)
		machine->prec = num;
	else
		machine->width = num;
}

size_t	get_field_nbr(const char *input, t_sm *machine)
{
	size_t	size;
	size_t	num;

	size = 0;
	num = 0;
	while (ft_isdigit(input[size]))
	{
		if (num > INT_MAX / 10)
		{
			machine->state = ERROR;
			return (-1);
		}
		if ((num == INT_MAX / 10) && (input[size] - '0' >= INT_MAX % 10))
		{
			machine->state = ERROR;
			return (-1);
		}
		num *= 10;
		num += input[size] - '0';
		size++;
	}
	set_field_nbr(num, machine);
	return (size);
}
