/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:41:22 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 15:25:03 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	pad_width(t_sm *machine, size_t offset)
{
	size_t	i;

	i = 0;
	while (i + offset < machine->width && (machine->state != ERROR))
	{
		add_to_buff(' ', machine);
		i++;
	}
}
