/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_prec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:27:06 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 15:52:01 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	pad_prec(t_sm *machine, size_t len)
{
	size_t	i;

	i = 0;
	while (i + len < machine->prec + 1 && (machine->state != ERROR))
	{
		add_to_buff('0', machine);
		i++;
	}
}