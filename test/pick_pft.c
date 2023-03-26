/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_pft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:31:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/26 11:55:19 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("---- test 9 ----\t05%%\n");
	printf("\t|%05%|\tprintf\n");
	ft_printf("\t|%05%|\tft_printf\n");
	ft_printf("---- test 10 ----\t-05%%\n");
	printf("\t|%-05%|\tprintf\n");
	ft_printf("\t|%-05%|\tft_printf\n");
	ft_printf("---- test 234 ----\t-8.5d\n");
	printf("\t|%-8.5d|\tprintf\n", 34);
	ft_printf("\t|%-8.5d|\tft_printf\n", 34);
	ft_printf("---- test 212 ----\t.5d\n");
	printf("\t|%.5d|\tprintf\n", 2);
	ft_printf("\t|%.5d|\tft_printf\n", 2);
	ft_printf("---- test 243 ----\t08.5d\n");
	printf("\t|%08.5d|\tprintf\n", 34);
	ft_printf("\t|%08.5d|\tft_printf\n", 34);
	ft_printf("---- test 261 ----\t.0d\n");
	printf("\t|%.0d|\tprintf\n", 0);
	ft_printf("\t|%.0d|\tft_printf\n", 0);
	ft_printf("---- test 7 ----\t5%%\n");
	printf("\t|%5%|\tprintf\n");
	ft_printf("\t|%5%|\tft_printf\n");
	ft_printf("---- test 19 ----\t4c\n");
	printf("\t|%4c|\tprintf\n", '#');
	ft_printf("\t|%4c|\tft_printf\n", '#');
	ft_printf("---- test 198 ----\t7d\n");
	printf("\t|%7d|\tprintf\n", 33);
	ft_printf("\t|%7d|\tft_printf\n", 33);
	ft_printf("---- test 338 ----\t.0d\n");
	printf("\t|%.0i|\tprintf\n", 0);
	ft_printf("\t|%.0i|\tft_printf\n", 0);
	ft_printf("---- test 479 ----\t*s, 32, 'abc'\tstar flag is not bonus 202303\n");
	printf("\t|%*s|\tprintf\n", 32, "abc");
	ft_printf("\t|%*s|\tft_printf\n", 32, "abc");
	return (0);
}
