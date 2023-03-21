/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:41:02 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 21:12:27 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "libft.h"

void	character(t_sm *machine)
{
	char	str[2];

	ft_bzero(str, 2);
	str[0] = (char)va_arg(*(machine->ap), int);
	if (str[0] == 0x0)
		return ;
	formalize(str, machine);
}
//this code moved to formalize.c
//	add_to_buff(c, machine);
