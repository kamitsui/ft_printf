/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:31:50 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 11:29:01 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "formalize.h"
#include "libft.h"

void	formalize(const char *str, t_sm *machine)
{
	int		adjust_flag;
	size_t	len;

	//adjust_flag = BIT_HASH | BIT_SPACE | BIT_PLUSE | BIT_WIDTH | BIT_PREC;
	adjust_flag = BIT_WIDTH | BIT_PREC;
	if ((machine->flag & adjust_flag) != FALSE)
		adjust(str, machine);
	else
	{
		if ((machine->flag & BIT_C) && str[0] == '\0')
			pad_n_str(str, machine, 1);
		else
		{
			len = ft_strlen(str);
			pad_n_str(str, machine, len);
		}
	}
}
//void code
//	if (machine->flag & ~(~0 << (NB_FALG + NB_FIELD)) != FALSE)
