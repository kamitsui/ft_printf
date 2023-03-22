/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_prec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:17:05 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:22:03 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_prec(char *str, t_sm *machine)
{
	int	i;
	int	len;

	if ((machine->flag & BIT_S) != FALSE)
	{
		adjust_prec_s(str, machine);
		return ;
	}
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
//better type
//#include <stdlib.h>
//	size_t	i;
//	size_t	len;
