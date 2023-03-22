/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formalize.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:04:49 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/22 12:26:45 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMALIZE_H
# define FORMALIZE_H

# include "ft_printf.h"

void	formalize(char *str, t_sm *machine);
void	adjust(char *str, t_sm *machine);
void	adjust_field(char *str, t_sm *machine);
void	adjust_width(char *str, t_sm *machine);
void	adjust_prec(char *str, t_sm *machine);
void	adjust_prec_s(char *str, t_sm *machine);
void	adjust_sign(char *str, t_sm *machine);
void	adjust_base(char *str, t_sm *machine);

#endif
