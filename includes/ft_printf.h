/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:10:46 by kamitsui          #+#    #+#             */
/*   Updated: 2023/08/28 16:58:35 by kamitsui         ###   ########.fr       */
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
	int				width;
	int				prec;
}	t_sm;

int		ft_printf(const char *input, ...);
int		ft_fprintf(int fd, const char *input, ...);
char	*join_to_out(const char *s1, const char *s2, int len2);

#endif
