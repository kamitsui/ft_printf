/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:43:50 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 17:16:17 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	string(t_sm *machine)
{
	char	*str;
	size_t	len;
	size_t	i;

	str = va_arg(*(machine->ap), char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
