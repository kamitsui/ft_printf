/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leak_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:46:28 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/28 22:15:47 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <libc.h>

__attribute__((destructor))
static void destructor() {
	system("leaks -q a.out");
}

int	main(void)
{
	ft_printf("1234567890\n");
	ft_printf("%d\n", 42);
	ft_printf("%i\n", 42);
	ft_printf("%u\n", 42);
	ft_printf("%c\n", 0);
	ft_printf("%s\n", "");
	ft_printf("%p\n", 0);
	ft_printf("%o\n", 07777);
//	system("leaks a.out");
	return 0;
}
