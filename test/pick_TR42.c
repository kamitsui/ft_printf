/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_TR42.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:11:42 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 19:48:53 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <unistd.h>

int	main(void)
{
//	ft_printf("---- %%c test5 ----\n");
	//char str[2] = {'0', '1'};
//	char str[2] = {0, '1'};
//	write(1, str, 2);
//	printf(" %c %c %c \tprintf\n", '0', 0, '1');
	ft_printf(" %c %c %c \tft_printf\n", '0', 0, '1');
	return (0);
}
