/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:18:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 14:17:24 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\n---- width > len ----\n");
	printf("|%10d|\t%%10d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%10d|\t%%10d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%10.8d|\t%%10.8d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%10.8d|\t%%10.8d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%10.8u|\t%%10.8u\targ = 12345\tprintf\t\tok\n", 12345U);
	ft_printf("|%10.8u|\t%%10.8u\targ = 12345\tft_printf\tok\n", 12345U);
	printf("|%10s|\t%%10s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%10s|\t%%10s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("|%10s|\t%%10s\targ = (void *)0\tprintf\t\tok\n", (void *)0);
	ft_printf("|%10s|\t%%10s\targ = (void *)0\tft_printf\tok\n", (void *)0);
	printf("|%010d|\t%%010d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%010d|\t%%010d\targ = 12345\tft_printf\tok\n", 12345);
	//printf("|%010s|\t%%010s\targ = '12345'\n", "12345");//does not compile
	//printf("|%#10d|\t%%#10d\targ = 12345\n", 12345);//does not compile
	printf("\n---- width min(0), max(INT_MAX) ----\n");
	printf("|%00d|\t\t%%00d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%00d|\t\t%%00d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%+0d|\t%%+0d\targ = 12345\n", 12345);
	printf("error\t\t%%0p\terror:does not compile\n");
	printf("error\t\t%%0c\terror:does not compile\n");
	printf("error\t\t%%0s\terror:does not compile\n");
	int r;
	r = printf("%2147483647d\n", 12345);
	printf("|%d|\t\t%%2147483647d\twidth = INT_MAX\t\terror case\tprintf\t\tok\n", r);
	r = ft_printf("%2147483647d\n", 12345);
	ft_printf("|%d|\t\t%%2147483647d\twidth = INT_MAX\t\terror case\tft_printf\tok\n", r);
	r = printf("%2147483647p\n", (void *)0x42);
	printf("|%d|\t\t%%2147483647p\twidth = INT_MAX\t\terror case\tprintf\t\tok\n", r);
	r = ft_printf("%2147483647p\n", (void *)0x42);
	ft_printf("|%d|\t\t%%2147483647p\twidth = INT_MAX\t\terror case\tft_printf\tok\n", r);
	r = printf("%2147483647c\n", 'c');
	printf("|%d|\t\t%%2147483647c\twidth = INT_MAX\t\terror case\tprintf\t\tok\n", r);
	r = ft_printf("%2147483647c\n", 'c');
	ft_printf("|%d|\t\t%%2147483647c\twidth = INT_MAX\t\terror case\tft_printf\tok\n", r);
	r = printf("%2147483647s\n", "12345");
	printf("|%d|\t\t%%2147483647s\twidth = INT_MAX\t\terror case\tprintf\t\tok\n", r);
	r = ft_printf("%2147483647s\n", "12345");
	ft_printf("|%d|\t\t%%2147483647s\twidth = INT_MAX\t\terror case\tft_printf\tok\n", r);
	printf("slow behavior\t\t%%2147483646d\twidth = INT_MAX - 1\tprintf & ft_printf(maybe. checked than 1MB)\n");
	printf("slow behavior\t\t%%2147483646p\twidth = INT_MAX - 1\tprintf & ft_printf(maybe. checked than 1MB)\n");
	printf("slow behavior\t\t%%2147483646c\twidth = INT_MAX - 1\tprintf & ft_printf(maybe. checked than 1MB)\n");
	printf("slow behavior\t\t%%2147483646s\twidth = INT_MAX - 1\tprintf & ft_printf(maybe. checked than 1MB)\n");
	printf("\n---- precision min(0), max(INT_MAX) ----\n");
	printf("|%.0d|\t%%.0d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%.0d|\t%%.0d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.0s|\t%%.0s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%.0s|\t%%.0s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("\n---- hash '#' ----\n");
	printf("|%10o|\t%%10o\targ = 07777\tprintf\t\tok\n", 077777);
	ft_printf("|%10o|\t%%10o\targ = 07777\tft_printf\tok\n", 077777);
	printf("|%#10o|\t%%#10o\targ = 07777\tprintf\t\tok\n", 077777);
	ft_printf("|%#10o|\t%%#10o\targ = 07777\tft_printf\tok\n", 077777);
	printf("|%10x|\t%%10x\targ = 0xFFFFF\tprintf\t\tok\n", 0xFFFFF);
	ft_printf("|%10x|\t%%10x\targ = 0xFFFFF\tft_printf\tok\n", 0xFFFFF);
	printf("|%#10x|\t%%#10x\targ = 0xFFFFF\tprintf\t\tok\n", 0xFFFFF);
	ft_printf("|%#10x|\t%%#10x\targ = 0xFFFFF\tft_printf\tok\n", 0xFFFFF);
	printf("|%10X|\t%%10x\targ = 0xFFFFF\tprintf\t\tok\n", 0xFFFFF);
	ft_printf("|%10X|\t%%10x\targ = 0xFFFFF\tft_printf\tok\n", 0xFFFFF);
	printf("|%#10X|\t%%#10x\targ = 0xFFFFF\tprintf\t\tok\n", 0xFFFFF);
	ft_printf("|%#10X|\t%%#10x\targ = 0xFFFFF\tft_printf\tok\n", 0xFFFFF);
	//printf("|%#10p|\t\t%%#10p\targ = (void *)0x0\n", (void *)0x0);//does not compile
	printf("|%10p|\t%%10p\targ = (void *)0x0\tft_printf\terror check\n", (void *)0x0);
	//printf("|%#10d|\t%%10d\targ = 99999\n", 99999);//does not compile
	//printf("|%#10u|\t%%10u\targ = 99999U\n", 99999U);//does not compile
	//printf("|%#10s|\t%%#10s\targ = '42tokyo'\n", "42tokyo");//does not compile
	printf("\n---- width <= len ----\n");
	printf("|%3d|\t%%3d\targ = 12345\tprintf\t\tok\n", 12345);//ok
	ft_printf("|%3d|\t%%3d\targ = 12345\tft_printf\tok\n", 12345);//ok
	printf("|%3s|\t%%3s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%3s|\t%%3s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("\n---- precision >  len ----\n");
	printf("|%.10d|\t%%.10d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%.10d|\t%%.10d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.10i|\t%%.10i\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%.10i|\t%%.10i\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.10u|\t%%.10u\targ = 12345U\tprintf\t\tok\n", 12345U);
	ft_printf("|%.10u|\t%%.10u\targ = 12345U\tft_printf\tok\n", 12345U);
	printf("|%.10o|\t%%.10o\targ = 012345\tprintf\t\tok\n", 012345);
	ft_printf("|%.10o|\t%%.10o\targ = 012345\tft_printf\tok\n", 012345);
	printf("|%.10x|\t%%.10x\targ = 0x12345\tprintf\t\tok\n", 0x12345);
	ft_printf("|%.10x|\t%%.10x\targ = 0x12345\tft_printf\tok\n", 0x12345);
	printf("|%.10X|\t%%.10X\targ = 0X12345\tprintf\t\tok\n", 0X12345);
	ft_printf("|%.10X|\t%%.10X\targ = 0X12345\tft_printf\tok\n", 0X12345);
	//printf("|%.10p|\t\t%%.10p\targ = (void *)12345\n", (void *)12345);//does not compile
	//printf("|%.10c|\t\t%%.10c\targ = 'K'\n", 'K');//does not compile
	printf("|%.10s|\t\t%%.10s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%.10s|\t\t%%.10s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("|%10.8s|\t%%10.8s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%10.8s|\t%%10.8s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("\n---- precision <= len ----\n");
	printf("|%.3d|\t%%.3d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%.3d|\t%%.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%.3s|\t%%.3s\targ = '12345'\tprintf\t\tok\n", "12345");
	ft_printf("|%.3s|\t%%.3s\targ = '12345'\tft_printf\tok\n", "12345");
	printf("|%10.3d|\t%%10.3d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%10.3d|\t%%10.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%+10.3d|\t%%+10.3d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%+10.3d|\t%%+10.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("\n---- mix ----\n");
	//printf("%-010d\n", 42);//does not compile
	//printf("%0-10d\n", 42);//does not compile
	//printf("%0# 10o\n", 042);//does not compile
	printf("%0#10o\tprintf\t\tok\n", 042);
	ft_printf("%0#10o\tft_printf\tok\n", 042);
	printf("%#010o\tprintf\t\tok\n", 042);
	ft_printf("%#010o\tft_printf\tok\n", 042);
	printf("%-#10o\t%%-#\tprintf\t\tok\n", 042);
	ft_printf("%-#10o\t%%-#\tft_printf\tok\n", 042);
	printf("%#-10o\t%%#-\tprintf\t\tok\n", 042);
	ft_printf("%#-10o\t%%#-\tft_printf\tok\n", 042);
	printf("% 010d\t%% 010d\tprintf\t\tok\n", 42);
	ft_printf("% 010d\t%% 010d\tft_printf\tok\n", 42);
	printf("%0 10d\t%%0 10d\tprintf\t\tok\n", 42);
	ft_printf("%0 10d\t%%0 10d\tft_printf\tok\n", 42);
	printf("% -10d\t%% -10d\tprintf\t\tok\n", 42);
	ft_printf("% -10d\t%% -10d\tft_printf\tok\n", 42);
	printf("%- 10d\t%%- 10d\tprintf\t\tok\n", 42);
	ft_printf("%- 10d\t%%- 10d\tft_printf\tok\n", 42);
	//printf("% #10o\t%% #\n", 042);//does not compile
	//printf("%# 10o\t%%# \n", 042);//does not compile
	//printf("%+#10o\t%%+#\n", 042);//does not compile
	//printf("%#+10o\t%%#+\n", 042);//does not compile
	printf("%+010d\t%%+010d\tprintf\t\tok\n", 42);
	ft_printf("%+010d\t%%+010d\tft_printf\tok\n", 42);
	printf("%0+10d\t%%0+10d\tprintf\t\tok\n", 42);
	ft_printf("%0+10d\t%%0+10d\tft_printf\tok\n", 42);
	printf("%+010d\t%%+010d\tprintf\t\tok\n", -42);
	ft_printf("%+010d\t%%+010d\tft_printf\tok\n", -42);
	//printf("%-+010d\t%%-+010d\tprintf\t\tok\n", -42);//compile error: flag '0' is ignored when flag '-' is present
	//ft_printf("%-+010d\t%%-+010d\tft_printf\tok\n", -42);
	printf("%+-10d\t%%+-10d\tprintf\t\tok\n", 42);
	ft_printf("%+-10d\t%%+-10d\tft_printf\tok\n", 42);
	printf("%-+10d\t%%-+10d\tprintf\t\tok\n", 42);
	ft_printf("%-+10d\t%%-+10d\tft_printf\tok\n", 42);
	//printf("%+ 10d\t%%+ \n", 42);//does not compile
	//printf("% +10d\t%% +\n", 42);//does not compile
	printf("\n---- ' ' ----\n");
	printf("|% d|\t%% d\tprintf\t\tok\n", 0);
	ft_printf("|% d|\t%% d\tft_printf\tok\n", 0);
	printf("|% 2d|\t%% 2d\tprintf\t\tok\n", 0);
	ft_printf("|% 2d|\t%% 2d\tft_printf\tok\n", 0);
	printf("|%2d|\t%%2d\tprintf\t\tok\n", 42);
	ft_printf("|%2d|\t%%2d\tft_printf\tok\n", 42);
	printf("|% 2d|\t%% 2d\tprintf\t\tok\n", 42);
	ft_printf("|% 2d|\t%% 2d\tft_printf\tok\n", 42);
	printf("|%2i|\t%%2i\tprintf\t\tok\n", 42);
	ft_printf("|%2i|\t%%2i\tft_printf\tok\n", 42);
	printf("|% 2i|\t%% 2i\tprintf\t\tok\n", 42);
	ft_printf("|% 2i|\t%% 2i\tft_printf\tok\n", 42);
	printf("|% 10d|\t%% 10d\tprintf\t\tok\n", 42);
	ft_printf("|% 10d|\t%% 10d\tft_printf\tok\n", 42);
	printf("|% 10d|\t%% 10d\tprintf\t\tok\n", -42);
	ft_printf("|% 10d|\t%% 10d\tft_printf\tok\n", -42);
	printf("|% 10.5d|\t%% 10.5d\tprintf\t\tok\n", -42);
	ft_printf("|% 10.5d|\t%% 10.5d\tft_printf\tok\n", -42);
	printf("|% 10.3d|\t%%10.3d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|% 10.3d|\t%%10.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|% 10.8d|\t%%10.8d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|% 10.8d|\t%%10.8d\targ = 12345\tft_printf\tok\n", 12345);
	//printf("% 2o\n", 042);//does not compile
	//printf("% 2u\n", 42U);//does not compile
	//printf("% 2x\t%% 2x\n", 0x42);//does not compile
	//printf("% 2X\t%% 2X\n", 0X42);//does not compile
	//printf("% 2p\n", (void *)0);//does not compile
	//printf("% 2c\n", 'K');//does not compile
	//printf("% 2s\n", "Tokyo");//does not compile
	printf("\n---- + ----\n");
	printf("|%+d|\t%%+d\tprintf\t\tok\n", 0);
	ft_printf("|%+d|\t%%+d\tft_printf\tok\n", 0);
	printf("|%+2d|\t%%+2d\tprintf\t\tok\n", 0);
	ft_printf("|%+2d|\t%%+2d\tft_printf\tok\n", 0);
	printf("|%2d|\t%%2d\tprintf\t\tok\n", 42);
	ft_printf("|%2d|\t%%2d\tft_printf\tok\n", 42);
	printf("|%+2d|\t%%+2d\tprintf\t\tok\n", 42);
	ft_printf("|%+2d|\t%%+2d\tft_printf\tok\n", 42);
	printf("|%2i|\t%%2i\tprintf\t\tok\n", 42);
	ft_printf("|%2i|\t%%2i\tft_printf\tok\n", 42);
	printf("|%+2i|\t%%+2i\tprintf\t\tok\n", 42);
	ft_printf("|%+2i|\t%%+2i\tft_printf\tok\n", 42);
	printf("|%+10d|\t%%+10d\tprintf\t\tok\n", 42);
	ft_printf("|%+10d|\t%%+10d\tft_printf\tok\n", 42);
	printf("|%+10d|\t%%+10d\tprintf\t\tok\n", -42);
	ft_printf("|%+10d|\t%%+10d\tft_printf\tok\n", -42);
	printf("|%+10.5d|\t%%+10.5d\tprintf\t\tok\n", -42);
	ft_printf("|%+10.5d|\t%%+10.5d\tft_printf\tok\n", -42);
	printf("|%+10.3d|\t%%+10.3d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%+10.3d|\t%%+10.3d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%+10.8d|\t%%+10.8d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%+10.8d|\t%%+10.8d\targ = 12345\tft_printf\tok\n", 12345);
	printf("|%+3.8d|\t%%+3.8d\targ = 12345\tprintf\t\tok\n", 12345);
	ft_printf("|%+3.8d|\t%%+3.8d\targ = 12345\tft_printf\tok\n", 12345);
	//printf("%+2o\n", 042);//does not compile
	//printf("%+2u\n", 42U);//does not compile
	//printf("%+2x\t%%+2x\n", 0x42);//does not compile
	//printf("%+2X\t%%+2X\n", 0X42);//does not compile
	//printf("%+2p\n", (void *)0);//does not compile
	//printf("%+2c\n", 'K');//does not compile
	//printf("%+2s\n", "Tokyo");//does not compile
	printf("\n---- '-' LEFT ----\n");
	printf("|%-10d|\t%%-10d\targ = -12345\tprintf\t\tok\n", -12345);
	ft_printf("|%-10d|\t%%-10d\targ = -12345\tft_printf\tok\n", -12345);
	printf("|%-10.8d|\t%%-10.8d\targ = -12345\tprintf\t\tok\n", -12345);
	ft_printf("|%-10.8d|\t%%-10.8d\targ = -12345\tft_printf\t\tok\n", -12345);
	//printf("|%-010.8d|\t%%-10.8d\targ = -12345\tprintf\t\t\n", -12345);//does not compile
	ft_printf("|%-010.8d|\t%%-010.8d\targ = -12345\tft_printf\terror check\n", -12345);
	printf("|%-10s|\t%%-10s\targ = '-12345'\tprintf\t\tok\n", "-12345");
	ft_printf("|%-10s|\t%%-10s\targ = '-12345'\tft_printf\tok\n", "-12345");
	printf("|%-10.3s|\t%%-10.3s\targ = '-12345'\tprintf\t\tok\n", "-12345");
	ft_printf("|%-10.3s|\t%%-10.3s\targ = '-12345'\tft_printf\tok\n", "-12345");
	printf("\n");

	//printf("%10.5 d\t%% 10.5d\n", -42);
	//printf("%0#10d\n", 42);
	//printf("%100000d\n", 12345);

	return 0;
}
