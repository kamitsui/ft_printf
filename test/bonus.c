/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:18:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/21 20:25:45 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\n---- width > len ----\n");
	printf("|%10d|\t%%10d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%10d|\t%%10d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%10.8d|\t%%10.8d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%10.8d|\t%%10.8d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%10s|\t%%10s\targ = '12345'\n", "12345");
	printf("|%10s|\t%%10s\targ = '12345'\n", "12345");
	printf("|%-10d|\t%%-10d\targ = -12345\tprintf\n", -12345);
	//ft_printf("|%-10d|\t%%-10d\targ = -12345\tft_printf\n", -12345);
	printf("|%-10s|\t%%-10s\targ = '-12345'\n", "-12345");
	printf("|%010d|\t%%010d\targ = 12345\n", 12345);
	//printf("|%010s|\t%%010s\targ = '12345'\n", "12345");//does not compile
	//printf("|%#10d|\t%%#10d\targ = 12345\n", 12345);//does not compile
	printf("\n---- width min(0), max(INT_MAX) ----\n");
	printf("|%00d|\t\t%%00d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%00d|\t\t%%00d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%+0d|\t%%+0d\targ = 12345\n", 12345);
	printf("NG\t\t%%0p\terror:does not compile\n");
	printf("NG\t\t%%0c\terror:does not compile\n");
	printf("NG\t\t%%0s\terror:does not compile\n");
	int r;
	r = printf("%2147483647d\n", 12345);
	printf("|%d|\t\t%%2147483647d\twidth = INT_MAX\t\terror case\tprintf\tok\n", r);
	r = ft_printf("%2147483647d\n", 12345);
	ft_printf("|%d|\t\t%%2147483647d\twidth = INT_MAX\t\terror case\tft_printf\tok\n", r);
	r = printf("%2147483647p\n", (void *)0x42);
	printf("|%d|\t\t%%2147483647p\twidth = INT_MAX\t\terror case\n", r);
	r = printf("%2147483647c\n", 'c');
	printf("|%d|\t\t%%2147483647c\twidth = INT_MAX\t\terror case\n", r);
	r = printf("%2147483647s\n", "12345");
	printf("|%d|\t\t%%2147483647s\twidth = INT_MAX\t\terror case\n", r);
	printf("OK\t\t%%2147483646d\twidth = INT_MAX - 1\tvery long output\n");
	printf("OK\t\t%%2147483646p\twidth = INT_MAX - 1\tvery long output\n");
	printf("OK\t\t%%2147483646c\twidth = INT_MAX - 1\tvery long output\n");
	printf("OK\t\t%%2147483646s\twidth = INT_MAX - 1\tvery long output\n");
	printf("\n---- precision min(0), max(INT_MAX) ----\n");
	printf("|%.0d|\t%%.0d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%.0d|\t%%.0d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.0s|\t%%.0s\targ = '12345'\n", "12345");
	printf("\n---- base ----\n");
	printf("|%10o|\t%%10o\targ = 07777\n", 077777);
	printf("|%#10o|\t%%#10o\targ = 07777\n", 077777);
	printf("|%10x|\t%%10x\targ = 0xFFFFF\n", 0xFFFFF);
	printf("|%#10x|\t%%#10x\targ = 0xFFFFF\n", 0xFFFFF);
	printf("|%10X|\t%%10x\targ = 0xFFFFF\n", 0xFFFFF);
	printf("|%#10X|\t%%#10x\targ = 0xFFFFF\n", 0xFFFFF);
	printf("|%10p|\t\t%%10p\targ = (void *)0x0\n", (void *)0x0);
	//printf("|%#10p|\t\t%%#10p\targ = (void *)0x0\n", (void *)0x0);//does not compile
	//printf("|%#10d|\t%%10d\targ = 99999\n", 99999);//does not compile
	//printf("|%#10u|\t%%10u\targ = 99999U\n", 99999U);//does not compile
	//printf("|%#10s|\t%%#10s\targ = '42tokyo'\n", "42tokyo");//does not compile
	printf("\n---- width <= len ----\n");
	printf("|%3d|\t%%3d\targ = 12345\tprintf\tok\n", 12345);//ok
	ft_printf("|%3d|\t%%3d\targ = 12345\tft_printf\tok\n", 12345);//ok
	printf("|%3s|\t%%3s\targ = '12345'\n", "12345");
	printf("\n---- precision >  len ----\n");
	printf("|%.10d|\t%%.10d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%.10d|\t%%.10d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.10i|\t%%.10i\targ = 12345\n", 12345);
	printf("|%.10u|\t%%.10u\targ = 12345U\n", 12345U);
	printf("|%.10o|\t%%.10o\targ = 012345\n", 012345);
	printf("|%.10x|\t%%.10x\targ = 0x12345\n", 0x12345);
	printf("|%.10X|\t%%.10X\targ = 0X12345\n", 0X12345);
	//printf("|%.10p|\t\t%%.10p\targ = (void *)12345\n", (void *)12345);//does not compile
	//printf("|%.10c|\t\t%%.10c\targ = 'K'\n", 'K');//does not compile
	printf("|%.10s|\t\t%%.10s\targ = '12345'\n", "12345");
	printf("\n---- precision <= len ----\n");
	printf("|%.3d|\t%%.3d\targ = 12345\tprintf\tok\n", 12345);
	ft_printf("|%.3d|\t%%.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.3s|\t%%.3s\targ = '12345'\n", "12345");
	printf("\n---- mix ----\n");
	//printf("%-010d\n", 42);//does not compile
	//printf("%0-10d\n", 42);//does not compile
	//printf("%0# 10o\n", 042);//does not compile
	printf("%0#10o\n", 042);
	printf("%#010o\n", 042);
	printf("%-#10o\t%%-#\n", 042);
	printf("%#-10o\t%%#-\n", 042);
	printf("% 010d\t%% 0\n", 42);
	printf("%0 10d\t%%0 \n", 42);
	printf("% -10d\t%% -\n", 42);
	printf("%- 10d\t%%- \n", 42);
	//printf("% #10o\t%% #\n", 042);//does not compile
	//printf("%# 10o\t%%# \n", 042);//does not compile
	//printf("%+#10o\t%%+#\n", 042);//does not compile
	//printf("%#+10o\t%%#+\n", 042);//does not compile
	printf("%+010d\t%%+0\n", 42);
	printf("%0+10d\t%%0+\n", 42);
	printf("%+-10d\t%%+-\n", 42);
	printf("%-+10d\t%%-+\n", 42);
	//printf("%+ 10d\t%%+ \n", 42);//does not compile
	//printf("% +10d\t%% +\n", 42);//does not compile
	printf("\n---- ' ' ----\n");
	printf("%2d\t%%2d\n", 42);
	printf("% 2d\t%% 2d\n", 42);
	printf("%2i\t%%2i\n", 42);
	printf("% 2i\t%% 2i\n", 42);
	//printf("% 2o\n", 042);//does not compile
	//printf("% 2u\n", 42U);//does not compile
	//printf("% 2x\t%% 2x\n", 0x42);//does not compile
	//printf("% 2X\t%% 2X\n", 0X42);//does not compile
	//printf("% 2p\n", (void *)0);//does not compile
	//printf("% 2c\n", 'K');//does not compile
	//printf("% 2s\n", "Tokyo");//does not compile
	printf("\n---- + ----\n");
	printf("%2d\t%%2d\n", 42);
	printf("%+2d\t%%+2d\n", 42);
	printf("%2i\t%%2i\n", 42);
	printf("%+2i\t%%+2i\n", 42);
	//printf("%+2o\n", 042);//does not compile
	//printf("%+2u\n", 42U);//does not compile
	//printf("%+2x\t%%+2x\n", 0x42);//does not compile
	//printf("%+2X\t%%+2X\n", 0X42);//does not compile
	//printf("%+2p\n", (void *)0);//does not compile
	//printf("%+2c\n", 'K');//does not compile
	//printf("%+2s\n", "Tokyo");//does not compile
	printf("\n");

	printf("%2u\n", 42U);
	printf("% 10d\n", 42);
	printf("% 10d\n", -42);
	printf("% 10.5d\t%% 10.5d\n", -42);
	//printf("%10.5 d\t%% 10.5d\n", -42);
	//printf("%0#10d\n", 42);
	//printf("%100000d\n", 12345);

	return 0;
}
