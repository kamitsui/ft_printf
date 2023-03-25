/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_pft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:31:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 21:42:02 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("---- test 9 ----\n");
	printf("|%05%|\tprintf\n");
	ft_printf("|%05%|\tft_printf\n");
	ft_printf("---- test 10 ----\n");
	printf("|%-05%|\tprintf\n");
	ft_printf("|%-05%|\tft_printf\n");
	ft_printf("---- test 234 ----\n");
	printf("|%-8.5d|\tprintf\n", 34);
	ft_printf("|%-8.5d|\tft_printf\n", 34);
	ft_printf("---- test 212 ----\n");
	printf("%.5d\tprintf\n", 2);
	ft_printf("%.5d\tft_printf\n", 2);
	ft_printf("---- test 243 ----\n");
	printf("%08.5d\tprintf\n", 34);
	ft_printf("%08.5d\tft_printf\n", 34);
	return (0);
}
