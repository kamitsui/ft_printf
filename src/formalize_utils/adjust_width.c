/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:15:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 11:12:28 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

static void	case_signed_num(const char *str, t_sm *machine)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	add_to_buff(str[0], machine);
	if ((machine->flag & BIT_LEFT) != FALSE)
	{
		pad_n_str(&str[1], machine, len - 1);
		pad_width(machine, len);
	}
	else
	{
		pad_width(machine, len);
		pad_n_str(&str[1], machine, len - 1);
	}
}

static void	case_other(const char *str, t_sm *machine)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	if ((machine->flag & BIT_LEFT) != FALSE)
	{
		pad_n_str(str, machine, len);
		pad_width(machine, len);
	}
	else
	{
		pad_width(machine, len);
		pad_n_str(str, machine, len);
	}
}

void	adjust_width(const char *str, t_sm *machine)
{
	//if ((machine->flag & (BIT_PLUSE | BIT_SPACE | BIT_D)) != FALSE)
	if ((machine->flag & BIT_ZERO) != FALSE)
		case_signed_num(str, machine);
	else
		case_other(str, machine);
}
//this code moved to pad_n_width.c
//	while (len + i < machine->width && (machine->state != ERROR))
//	{
//		add_to_buff(' ', machine);
//		i++;
//	}
//this code moved to pad_n_str.c
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
//void code
//	pad_width(machine, len);
//	pad_str(str, machine);
