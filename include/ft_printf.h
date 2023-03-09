/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:10:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 17:33:41 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

enum e_state
{
	LETTER,
	FLAG,
	CONV,
	ERROR,
	END
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
}	t_sm;

void	process(char *input, t_sm *machine);
int		ft_printf(char *input, ...);

#endif
// void this code
	//size_t			len;
	//size_t			out_size;
