/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   review.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:40:37 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/27 17:59:16 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("%%5.10c\t|%5.10c|\t\tprintf\n", 'c');
	ft_printf("%%5.10c\t|%5.10c|\t\tft_printf\n", 'c');
	printf("%%.10c\t|%.10c|\t\tprintf\n", 'c');
	ft_printf("%%.10c\t|%.10c|\t\tft_printf\n", 'c');
	ft_printf("-----------\n");
	printf("%%#.10o\t|%#.10o|\tprintf\n", 042);
	ft_printf("%%#.10o\t|%#.10o|\tft_printf\n", 042);
	printf("%%#.10x\t|%#.10x|\tprintf\n", 0x42);
	ft_printf("%%#.10x\t|%#.10x|\tft_printf\n", 0x42);
	printf("%% #.10x\t|% #.10x|\tprintf\n", 0x42);
	ft_printf("%% #.10x\t|% #.10x|\tft_printf\n", 0x42);
	printf("%%+#.10x\t|%+#.10x|\tprintf\n", 0x42);
	ft_printf("%%+#.10x\t|%+#.10x|\tft_printf\n", 0x42);
	printf("%%+#.10p\t|%+#.10p|\tprintf\n", (void *)0x42);
	ft_printf("%%+#.10p\t|%+#.10p|\tft_printf\n", (void *)0x42);
	ft_printf("-----------\n");
	printf("|%.10x| .10x\n", 0x42);
	ft_printf("|%.10x| .10x\n", 0x42);
	ft_printf("-----------\n");
	printf("%%#010o\t|%#010o|\tprintf\n", 042);
	ft_printf("%%#010o\t|%#010o|\tft_printf\n", 042);
	printf("%%#010x\t|%#010x|\tprintf\n", 0x42);
	ft_printf("%%#010x\t|%#010x|\tft_printf\n", 0x42);
	printf("%%010p\t|%010p|\tprintf\n", (void *)0x42);
	ft_printf("%%010p\t|%010p|\tft_printf\n", (void *)0x42);
	ft_printf("-----------\n");
	printf("%%-010p\t|%-010p|\n", (void *)0x42);
	ft_printf("%%-010p\t|%-010p|\n", (void *)0x42);
	printf("%%#10o\t|%#10o|\n", 042);
	ft_printf("%%#10o\t|%#10o|\n", 042);
	printf("%%#10x\t|%#10x|\n", 0x42);
	ft_printf("%%#10x\t|%#10x|\n", 0x42);
	printf("|%10p| 10p\n", (void *)0x42);
	ft_printf("|%10p| 10p\n", (void *)0x42);
	printf("|% 10p|  10p\n", (void *)0x42);
	ft_printf("|% 10p|  10p\n", (void *)0x42);
	printf("|%-010p| -010p\n", (void *)0x42);
	ft_printf("|%-010p| -010p\n", (void *)0x42);
	printf("|%-10p| -10p\n", (void *)0x42);
	ft_printf("|%-10p| -10p\n", (void *)0x42);
}
