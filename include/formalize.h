/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formalize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:04:49 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/23 18:54:18 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMALIZE_H
# define FORMALIZE_H

# include "ft_printf.h"
# include <stdlib.h>

void	formalize(char *str, t_sm *machine);
void	adjust(char *str, t_sm *machine);
void	adjust_field(char *str, t_sm *machine);
void	adjust_width(char *str, t_sm *machine);
void	adjust_prec(char *str, t_sm *machine);
void	adjust_number(char *str, t_sm *machine);
void	adjust_string(char *str, t_sm *machine);
void	adjust_sign(char *str, t_sm *machine);
void	adjust_hash(char *str, t_sm *machine);
void	pad_str(char *str, t_sm *machine);
void	pad_n_str(char *str, t_sm *machine, size_t limit);
void	pad_width(t_sm *machine, size_t offset);
void	pad_prec(t_sm *machine, size_t len);
void	sequence_signed(char *str, t_sm *machine);
void	sequence_unsigned(char *str, t_sm *machine);

#endif
