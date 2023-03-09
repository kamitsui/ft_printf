/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_arg.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:18:08 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/09 18:06:07 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNSIGNED_ARG_H
# define UNSIGNED_ARG_H

typedef unsigned long long	(*t_f_u_va_arg)(t_sm *);
unsigned long long	u_hh(t_sm *machine);
unsigned long long	u_ll(t_sm *machine);
unsigned long long	u_h(t_sm *machine);
unsigned long long	u_l(t_sm *machine);
unsigned long long	u_int(t_sm *machine);
unsigned long long	u_va_arg(t_sm *machine);

#endif
