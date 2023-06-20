/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:27:38 by kamitsui          #+#    #+#             */
/*   Updated: 2023/06/20 20:49:06 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	main(void)
{
	char *str_stdout = "stdout";
	ft_printf("%s\n", str_stdout);
	char *str_err = "stderr";
	ft_fprintf(STDERR_FILENO, "%s\n", str_err);
	return 0;
}
