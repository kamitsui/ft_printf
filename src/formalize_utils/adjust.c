/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:29:09 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 11:27:52 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "formalize.h"
#include "libft.h"

void	adjust(const char *str, t_sm *machine)
{
//	if ((machine->flag & (BIT_WIDTH | BIT_PREC)) != FALSE)
		adjust_field(str, machine);
//	else
//	{
//		if ((machine->flag & BIT_C) && str[0] == '\0')
//			pad_n_str(str, machine, 1);
//		else
//			pad_str(str, machine);
//	}
}
//this code moved pad_str.c
//	int	i;
//	int	len;
//	{
//		len = ft_strlen(str);
//		i = 0;
//		while (i < len && (machine->state != ERROR))
//		{
//			add_to_buff(str[i], machine);
//			i++;
//		}
//	}
