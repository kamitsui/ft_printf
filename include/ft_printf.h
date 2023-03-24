/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:10:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/24 10:46:33 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

enum e_state
{
	LETTER,
	FLAG,
	FIELD,
	PREFIX,
	TYPE,
	ERROR
};

typedef struct s_sm
{
	enum e_state	state;
	va_list			*ap;
	char			buffer[4096];
	int				len;
	char			*out;
	int				out_size;
	int				flag;
	size_t			width;
	size_t			prec;
}	t_sm;

void	process(const char *input, t_sm *machine);
int		ft_printf(const char *input, ...);

#endif
//void this code
//	size_t			len;
//	size_t			out_size;
//	int				width;
//	int				prec;
