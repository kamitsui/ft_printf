/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:29:09 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 19:19:30 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "formalize.h"
#include "libft.h"

void	adjust(char *str, t_sm *machine)
{
	int	i;
	int	len;

	if ((machine->flag & (BIT_WIDTH | BIT_PREC)) != FALSE)
		adjust_field(str, machine);
	else
	{
		len = ft_strlen(str);
		i = 0;
		while (i < len && (machine->state != ERROR))
		{
			add_to_buff(str[i], machine);
			i++;
		}
	}
//	else if ((machine->flag & (BIT_SPACE | BIT_PLUSE)) != FALSE)
//		adjust_sign(str, machine);
//	else
//		adjust_base(str, machine);
}
//better type
//#include <stdlib.h>
//	size_t	i;
//	size_t	len;
