/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:47:49 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 10:54:11 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

int	width(const char *input, t_sm *machine)
{
	int	size;

	size = 0;
	if (ft_isdigit(*input) == TRUE)
	{
		machine->flag |= BIT_WIDTH;
		size = get_field_nbr(input, machine);
	}
	return (size);
}
