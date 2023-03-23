/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_prec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:17:05 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 18:08:39 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "process.h"
#include "formalize.h"
#include "libft.h"

static void	decimal_unsigned(char *str, t_sm *machine)
{
	int	i;
	int	len;

	i = 0;
	while (machine->width > machine->prec + i)
	{
		add_to_buff(' ', machine);
		if (machine->state == ERROR)
			return ;
		i++;
	}
	i = 0;
	len = ft_strlen(str);
	while (machine->prec > len + i)
	{
		add_to_buff('0', machine);
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
///// must fix error handl code

static void	decimal_signed(char *str, t_sm *machine)
{
	int	i;
	int	len;

	i = 0;
	while (i + machine->prec + 1 < machine->width && machine->state != ERROR)
	{
		add_to_buff(' ', machine);
		i++;
	}
	if (machine->state == ERROR)
		return ;
	add_to_buff(str[0], machine);
	if (machine->state == ERROR)
		return ;
	i = 0;
	len = ft_strlen(str);
	while ((i + len < machine->prec + 1) && (machine->state != ERROR))
	{
		add_to_buff('0', machine);
		i++;
	}
	i = 1;
	while ((i < len) && (machine->state != ERROR))
	{
		add_to_buff(str[i], machine);
		i++;
	}
}

void	adjust_prec(char *str, t_sm *machine)
{
	if ((machine->flag & BIT_S) != FALSE)
	{
		adjust_prec_s(str, machine);
		return ;
	}
	if (ft_isdigit(*str) == TRUE)
		decimal_unsigned(str, machine);
	else
		decimal_signed(str, machine);
}
//void	adjust_prec(char *str, t_sm *machine)
//{
//	int	i;
//	int	len;
//
//	if ((machine->flag & BIT_S) != FALSE)
//	{
//		adjust_prec_s(str, machine);
//		return ;
//	}
//	i = 0;
//	while (machine->width > machine->prec + i)
//	{
//		add_to_buff(' ', machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
//	i = 0;
//	len = ft_strlen(str);
//	while (machine->prec > len + i)
//	{
//		add_to_buff('0', machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
//}
//better type
//#include <stdlib.h>
//	size_t	i;
//	size_t	len;
