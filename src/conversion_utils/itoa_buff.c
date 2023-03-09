/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_buff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:41:49 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 17:14:53 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "process.h"

static char	get_digit(unsigned long num, int base, t_sm *machine)
{
	num %= base;
	if (base == 8 || base == 10 || num < 10)
		return (num + '0');
	else
	{
		num -= 10;
		if ((machine->flag & (X_CONV | P_CONV)) != FALSE)
			return (num + 'a');
		else
			return (num + 'A');
	}
}

static int	itoa_len(unsigned long num, long base)
{
	int	len;

	len = 1;
	if (num < (unsigned long)base)
		return (len);
	while (num >= (unsigned long)base)
	{
		len++;
		num /= base;
	}
	return (len);
}

//IDEA change of name ... t_sm -> t_st_machine
char	*itoa_buff(unsigned long long num, char *str, int base, t_sm *machine)
{
	int	len;

	len = itoa_len(num, base);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = get_digit(num, base, machine);
		num /= base;
		len--;
	}
	return (str);
}
