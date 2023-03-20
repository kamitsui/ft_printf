/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:45:45 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/20 19:35:30 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("%d\n", -1);
	ft_printf("%0-+lu\t0-+lu\n\n", 42);
	ft_printf("%llu\tllu\n\n", 42);
	ft_printf("%lu\tlu\n\n", 42);
	return (0);
}
