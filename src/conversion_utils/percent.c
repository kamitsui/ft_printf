#include "ft_printf.h"
#include "process.h"

void	percent(t_state_machine *machine)
{
		add_to_buff('%', machine);
}
