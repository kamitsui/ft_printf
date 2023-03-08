/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:10:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/08 15:11:45 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

// # include "process.h"//compile error
enum e_state
{
	LETTER,
	FLAG,
	CONV,
	ERROR,
	END
};

typedef struct s_state_machine
{
	enum e_state	state;
	va_list			*ap;
	char			buffer[4096];
	int			len;
	//size_t			len;
	char			*out;
	int			out_size;
	//size_t			out_size;
	int				flag;
}				t_state_machine;

void	process(char *input, t_state_machine *machine);
int		ft_printf(char *input, ...);

#endif
