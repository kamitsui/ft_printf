/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:45:45 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 20:10:19 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	r;
	r = ft_printf("%21474836410d", 12345);
	ft_printf("\n|%d|\t\t%%21474836410d\twidth = INT_MAX + 1\t\terror case\tft_printf\n", r);
	r = ft_printf("%2147483648d", 12345);
	ft_printf("\n|%d|\t\t%%2147483648d\twidth = INT_MAX + 1\t\terror case\tft_printf\n", r);
	r = ft_printf("%2147483647d", 12345);
	ft_printf("\n|%d|\t\t%%2147483647d\twidth = INT_MAX\t\terror case\tft_printf\n", r);
	//ft_printf("%llu\tllu\n\n", 42);
	//ft_printf("%lu\tlu\n\n", 42);
//	------- ok case --------
//	r = ft_printf("%10d\n", 12345);
//	ft_printf("%d\n", r);
//	r = ft_printf("%10.8d\n", 12345);
//	ft_printf("%d\n", r);
//	r = ft_printf("%4095d\n", 12345);
//	ft_printf("|%d|\t\t%%4095d\terror case\tft_printf\n", r);
//	r = ft_printf("%4096d\n", 12345);
//	ft_printf("|%d|\t\t%%4096d\terror case\tft_printf\n", r);
//	r = ft_printf("%4097d\n", 12345);
//	ft_printf("|%d|\t\t%%4097d\terror case\tft_printf\n", r);
//	r = ft_printf("%8192d", 12345);
//	ft_printf("\n|%d|\t\t%%8192d\twidth = INT_MAX\t\terror case\tft_printf\n", r);
//	r = ft_printf("%8193d", 12345);
//	ft_printf("\n|%d|\t\t%%8193d\twidth = INT_MAX\t\terror case\tft_printf\n", r);
//	r = ft_printf("%1048576d", 12345);
//	ft_printf("\n|%d|\t\t%%1048576d\twidth = 1MB\t\terror case\tft_printf\n", r);
//	------- long time case --------
//	r = ft_printf("%524288000d", 12345);
//	ft_printf("\n|%d|\t\t%%524288000d\twidth = 500MB\t\terror case\tft_printf\n", r);
//	r = ft_printf("%734003200d", 12345);
//	ft_printf("\n|%d|\t\t%%734003200d\twidth = 700MB\t\terror case\tft_printf\n", r);
//	r = ft_printf("%2147483407d", 12345);
//	ft_printf("\n|%d|\t\t%%2147483407d\twidth = 2GB - 240 - 1\t\terror case\tft_printf\n", r);
//	r = ft_printf("%2147483408d", 12345);
//	ft_printf("\n|%d|\t\t%%2147483408d\twidth = 2GB - 240INT_MAX\t\terror case\tft_printf\n", r);
//	r = ft_printf("%2147483646d", 12345);
//	ft_printf("\n|%d|\t\t%%2147483646d\twidth = INT_MAX - 1\t\terror case\tft_printf\n", r);
//	------- error case --------
	return (0);
}
