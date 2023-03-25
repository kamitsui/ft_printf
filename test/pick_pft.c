/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_pft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:31:43 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/25 20:27:24 by kamitsui         ###   ########.fr       */
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
	return (0);
}
