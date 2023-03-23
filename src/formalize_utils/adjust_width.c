/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:15:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 17:01:25 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_width(char *str, t_sm *machine)
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
