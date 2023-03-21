/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:43:50 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 21:33:07 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "libft.h"

void	string(t_sm *machine)
{
	char	*str;

	str = va_arg(*(machine->ap), char *);
	if (str == NULL)
		str = "(null)";
	formalize(str, machine);
}
//this code moved to formalize.c
//	size_t	len;
//	size_t	i;
//	len = ft_strlen(str);
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
