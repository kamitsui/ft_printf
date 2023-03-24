/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_n_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:29:10 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 11:11:29 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	pad_n_str(const char *str, t_sm *machine, size_t limit)
{
	size_t	i;

	i = 0;
	while (i < limit && (machine->state != ERROR))
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
