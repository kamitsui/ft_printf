/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:27:32 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/06 20:34:25 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include "ft_printf.h"

typedef void	(*t_f_conversion)(t_state_machine *);
void	conversion(t_state_machine *machine);
void	decimal(t_state_machine *machine);
void	u_decimal(t_state_machine *machine);
void	octal(t_state_machine *machine);
void	hexadecimal(t_state_machine *machine);
void	hexadecimal_major(t_state_machine *machine);
void	pointer(t_state_machine *machine);
void	character(t_state_machine *machine);
void	string(t_state_machine *machine);
void	percent(t_state_machine *machine);

#endif
