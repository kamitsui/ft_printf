/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:42:12 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 21:28:30 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "va_arg.h"

void	pointer(t_sm *machine)
{
	char			str[42];
	void			*p;
	int				base;

	ft_bzero(str, 42);//42 is not better  >> xx_SIZE
	base = 0x10;
	p = va_arg(*(machine->ap), void *);
	str[0] = '0';
	str[1] = 'x';
	itoa_buff((unsigned long)p, &str[2], base, machine);
	formalize(str, machine);
}
//this code moved to formalize.c
//static void	add_prefix(t_sm *machine)
//{
//	add_to_buff('0', machine);
//	if (machine->state == ERROR)
//		return ;
//	add_to_buff('x', machine);
//}
//
//	size_t			len;
//	size_t			i;
//	add_prefix(machine);
//	if (machine->state == ERROR)
//		return ;
//	len = ft_strlen(str);
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
