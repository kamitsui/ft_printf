

#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"

void	get_nbr_unsigned(unsigned long num, t_state_machine *machine)
{
	if (num > 9)
		get_nbr_unsigned(num / 10, machine);
	add_to_buff((num % 10) + '0', machine);
}

void	u_decimal(t_state_machine *machine)
{
	get_nbr_unsigned((unsigned long)va_arg(*(machine->ap), unsigned int), machine);
}
