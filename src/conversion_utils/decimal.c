/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:15:55 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/17 18:47:40 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "libft.h"

static void	get_nbr(long num, t_sm *machine)
{
	if (num < 0)
	{
		add_to_buff('-', machine);
		if (machine->state == ERROR)
			return ;
		if (num < -9)
			get_nbr(num / (-10), machine);
		add_to_buff(-1 * (num % 10) + '0', machine);
		return ;
	}
	if (num > 9)
		get_nbr(num / 10, machine);
	if (machine->state == ERROR)
		return ;
	add_to_buff((num % 10) + '0', machine);
}

#include <stdio.h>//warrrrrrrrinig
void	decimal(t_sm *machine)
{
	//if (ft_strnequ(&(machine->ap), "", 1) == TRUE)
	//if (*(machine->ap) == 0)
	if ((machine->ap)[0] == 0)
	{
		printf("error\n");
		machine->state = ERROR;
		return ;
	}
	get_nbr((long)va_arg(*(machine->ap), int), machine);
}
