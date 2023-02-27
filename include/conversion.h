/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:27:32 by kamitsui          #+#    #+#             */
/*   Updated: 2023/02/27 17:01:35 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include "ft_printf.h"

typedef void	(*t_f_conversion)(t_state_machine *);
void	decimal(t_state_machine *machine);
void	conversion(t_state_machine *machine);

#endif
