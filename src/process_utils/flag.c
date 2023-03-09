/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:15:52 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 18:27:16 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"

int	flag(char *input, t_sm *machine)
{
	static char	*str_flag[NB_FLAG] = {
		FLAG_HH, FLAG_LL, FLAG_H, FLAG_L, FLAG_ZERO, FLAG_HASH, FLAG_SPACE};
	int			size;
	int			i;

	size = 0;
	i = 0;
	while (i < NB_FLAG)
	{
		if (i < 2)
			size = 2;
		else
			size = 1;
		if (ft_strnequ(input, str_flag[i], size) == TRUE)
		{
			machine->flag |= (1 << i);
			return (size);
		}
		i++;
	}
	machine->state = CONV;
	return (0);
}
//Debug code
//#include <stdio.h>
//			char *flag_bin = ft_itoa_binary(machine->flag);
//			printf("cur = '%c' state = FLAG\tflag = '%d'\t%s\n",
//				*input, machine->flag, flag_bin);
//			free(flag_bin);
//
//Notes "process.h"
//# define FLAG_HH	"hh"
//# define FLAG_LL	"ll"
//# define FLAG_H		"h"
//# define FLAG_L		"l"
//# define FLAG_ZERO	"0"
//# define FLAG_HASH	"#"
//# define FLAG_SPACE	" "
//
//# define NB_FLAG	7
//
//# define TRUE	1
//# define FALSE	0
