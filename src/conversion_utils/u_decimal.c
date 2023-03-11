/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_decimal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:44:02 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/11 17:07:22 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "unsigned_arg.h"

void	u_decimal(t_sm *machine)
{
	char				str[42];
	unsigned long long	num;
	int					base;
	size_t				len;
	size_t				i;

	base = 10;
	num = u_va_arg(machine);
	itoa_buff(num, str, base, machine);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
}
