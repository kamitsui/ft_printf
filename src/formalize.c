/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:31:50 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:24:06 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "formalize.h"
#include "libft.h"

void	formalize(char *str, t_sm *machine)
{
	int		adjust_flag;
	size_t	i;
	size_t	len;

	adjust_flag = BIT_HASH | BIT_SPACE | BIT_PLUSE | BIT_WIDTH | BIT_PREC;
	if ((machine->flag & adjust_flag) != FALSE)
		adjust(str, machine);
	else
	{
		i = 0;
		len = ft_strlen(str);
		while (i < len)
		{
			add_to_buff(str[i], machine);
			if (machine->state == ERROR)
				return ;
			i++;
		}
	}
}
//void code
//	if (machine->flag & ~(~0 << (NB_FALG + NB_FIELD)) != FALSE)
