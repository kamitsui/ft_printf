/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_TR42.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:11:42 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 12:42:31 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
//	ft_printf("---- %%c test5 ----\n");
//	printf(" %c %c %c \tprintf\n", '0', 0, '1');
//	ft_printf(" %c %c %c \tft_printf\n", '0', 0, '1');
//	ft_printf("---- %%-c test5 ----\n");
//	printf(" %-1c %-2c %-3c \tprintf\n", '0', 0, '1');
//	ft_printf(" %-1c %-2c %-3c \tft_printf\n", '0', 0, '1');
//	ft_printf("---- %%s test1 ----\n");
//	printf("%s\tprintf\n", "");
//	ft_printf("%s\tft_printf\n", "");
//	ft_printf("---- %%04d test3 ----\n");
//	printf(" %04d \tprintf\n", 9);
//	ft_printf(" %04d \tft_printf\n", 9);
//	ft_printf("---- %%04d test15 ----\n");
//	printf(" %04d \tprintf\n", -14);
//	ft_printf(" %04d \tft_printf\n", -14);
//	ft_printf("---- %%05i test44 ----\n");
//	printf(" %05i \tprintf\n", -15);
//	ft_printf(" %05i \tft_printf\n", -15);
//	ft_printf("---- %%.2x test101 ----\n");
//	printf(" %.2x \tprintf\n", 10);
//	ft_printf(" %.2x \tft_printf\n", 10);
	ft_printf("---- %%#x test1 ----\n");
	printf(" %#x \tprintf\n", 0);
	ft_printf(" %#x \tft_printf\n", 0);
	printf(" %#x \tprintf\n", -1);
	ft_printf(" %#x \tft_printf\n", -1);
	printf(" %#x \tprintf\n", 1);
	ft_printf(" %#x \tft_printf\n", 1);
	return (0);
}
