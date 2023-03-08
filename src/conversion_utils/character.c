#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"

void	character(t_state_machine *machine)
{
	char	c;
	c = (char)va_arg(*(machine->ap), int);
	add_to_buff(c, machine);
}
