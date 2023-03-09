/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:42:12 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 17:15:41 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "unsigned_arg.h"

static void	add_prefix(t_sm *machine)
{
	add_to_buff('0', machine);
	add_to_buff('x', machine);
}

void	pointer(t_sm *machine)
{
	char			str[42];
	void			*p;
	int				base;
	size_t			len;
	size_t			i;

	base = 0x10;
	p = va_arg(*(machine->ap), void *);
	itoa_buff((unsigned long)p, str, base, machine);
	len = ft_strlen(str);
	add_prefix(machine);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
