/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:15:55 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 16:05:27 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"
#include "va_arg.h"
#include "libft.h"

static	size_t	get_digit(long long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		len++;
		if (num > 9)
		{
			len++;
			num = -1 * (num / 10);
		}
		else
			num *= -1;
	}
	while (num / 10 > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

void	decimal(t_sm *machine)
{
	char		str[42];
	long long	num;
	long long	tmp_num;
	size_t		len;
//	size_t		i;

	ft_bzero(str, 42);
	num = s_va_arg(machine);
	tmp_num = num;
	len = get_digit(num);
	if (num < 0)
	{
		str[0] = '-';
		str[len - 1] = -1 * (num % 10) + '0';
		tmp_num = -1 * (num / 10);
		if (tmp_num > 0)
			itoa_buff(tmp_num, &str[num < 0], 10, machine);
	}
	else
		itoa_buff(num, str, 10, machine);
	formalize(str, machine);
//	i = 0;
//	while (i < len)
//	{
//		add_to_buff(str[i], machine);
//		if (machine->state == ERROR)
//			return ;
//		i++;
//	}
}
// debug code
//#include <stdio.h>// for debug
//	printf("|num:%d|", (int)num);// for debug
//	printf("|len:%d|", (int)len);// for debug
//	printf("|str:%s|", str);// for debug
//mandatory
//static void	get_nbr(long num, t_sm *machine)
//{
//	if (num < 0)
//	{
//		add_to_buff('-', machine);
//		if (machine->state == ERROR)
//			return ;
//		if (num < -9)
//			get_nbr(num / (-10), machine);
//		add_to_buff(-1 * (num % 10) + '0', machine);
//		return ;
//	}
//	if (num > 9)
//		get_nbr(num / 10, machine);
//	if (machine->state == ERROR)
//		return ;
//	add_to_buff((num % 10) + '0', machine);
//}
//
//void	decimal(t_sm *machine)
//{
//	get_nbr((long)va_arg(*(machine->ap), int), machine);
//}
//#include <stdio.h>//warrrrrrrrinig
//void	decimal(t_sm *machine)
//{
//	long	num;
//
//	num = (long)va_arg(*(machine->ap), int);
//	//if (ft_strnequ(&(machine->ap), "", 1) == TRUE)
//	if (*(machine->ap) == 0)
//	//if ((machine->ap)[0] == 0)
//	{
//		printf("error\n");
//		machine->state = ERROR;
//		return ;
//	}
//	get_nbr(num, machine);
//}
