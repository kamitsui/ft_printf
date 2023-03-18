/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:20:59 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/18 20:46:04 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
# define PROCESS_H

# include "ft_printf.h"

# define FLAG_ZERO	"0"
# define FLAG_LEFT	"-"
# define FLAG_HASH	"#"
# define FLAG_SPACE	" "
# define FLAG_PLUSE	"+"

# define FIELD_PREC	"."

# define PREFIX_HH		"hh"
# define PREFIX_LL		"ll"
# define PREFIX_H		"h"
# define PREFIX_L		"l"

# define ALL_TYPE	"diuoxXpcs%"

# define NB_FLAG	5
# define NB_FIELD	2
# define NB_PREFIX	4
# define NB_TYPE	10

# define TRUE	1
# define FALSE	0

# define ZERO		0x000001
# define LEFT		0x000002
# define HASH		0x000004
# define SPACE		0x000008
# define PLUSE		0x000010
# define WIDTH		0x000020
# define PREC		0x000040

# define HH			0x000100
# define LL			0x000200
# define H			0x000400
# define L			0x000800

# define D_TYPE		0x001000
# define I_TYPE		0x002000
# define U_TYPE		0x004000
# define O_TYPE		0x008000
# define X_TYPE		0x010000
# define XMAJ_TYPE	0x020000
# define P_TYPE		0x040000
# define C_TYPE		0x080000
# define S_TYPE		0x100000
# define PER_TYPE	0x200000

typedef int		(*t_f_process)(char *, t_sm *);
int		letter(char *input, t_sm *machine);
int		flag(char *input, t_sm *machine);
int		field(char *input, t_sm *machine);
int		prefix(char *input, t_sm *machine);
int		type(char *input, t_sm *machine);
int		error(char *input, t_sm *machine);
void	add_to_buff(char c, t_sm *machine);

typedef int	(*t_f_field)(char *, t_sm *);
int	width(char *input, t_sm *machine);
int	precision(char *input, t_sm *machine);

#endif
