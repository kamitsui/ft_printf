/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_field.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:34:14 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:41 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>// for debug

static void	a_f_width(char *str, t_sm *machine)
{
//	size_t	i;
//	size_t	len;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (machine->width > len + i)
	{
		add_to_buff(' ', machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
}

static void	a_f_width_prec(char *str, t_sm *machine)
{
//	size_t	i;
//	size_t	len;
	int	i;
	int	len;

	i = 0;
	while (machine->width > machine->prec + i)
	{
		add_to_buff(' ', machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
	i = 0;
	len = ft_strlen(str);
	while (machine->prec > len + i)
	{
		add_to_buff('0', machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
}

void	adjust_field(char *str, t_sm *machine)
{
//	size_t	len;
	int	len;

	len = (int)ft_strlen(str);
	printf("%d:width\n", machine->width);// for debug
	printf("%d:precision\n", machine->prec);// for debug
	printf("%d:len\n", len);// for debug
	printf("%s:str\n", str);// for debug
	char *flag_bin = (char *)ft_itoa_binary(machine->flag);// for debug
	printf("%s:flag_bin\t%#x:flag\n", flag_bin, machine->flag);// for debug
	free(flag_bin);// for debug
	if ((machine->flag & BIT_PREC) != FALSE)
		a_f_width_prec(str, machine);
	else
		a_f_width(str, machine);
}
