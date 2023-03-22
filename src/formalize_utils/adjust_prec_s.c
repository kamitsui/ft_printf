/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_prec_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:20:18 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:21:23 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_prec_s(char *str, t_sm *machine)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (len > machine->prec)
		len = machine->prec;
	while (len + i < machine->width)
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
//better type
//#include <stdlib.h>
//	size_t	i;
//	size_t	len;
