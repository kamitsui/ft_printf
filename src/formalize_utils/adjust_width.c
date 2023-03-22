/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:15:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:22:21 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

void	adjust_width(char *str, t_sm *machine)
{
//	size_t	i;
//	size_t	len;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (machine->width > len + i)
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
