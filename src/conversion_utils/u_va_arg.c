
#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"

static unsigned long long	u_ll(t_state_machine *machine)
{
	unsigned long long	num;

	num = va_arg(*(machine->ap), unsigned long long);
	return (num);
}

static unsigned long long	u_l(t_state_machine *machine)
{
	unsigned long	num;

	num = va_arg(*(machine->ap), unsigned long);
	return ((unsigned long long)num);
}

static unsigned long long	u_h(t_state_machine *machine)
{
	unsigned short	num;

	num = (unsigned short)va_arg(*(machine->ap), int);
	return ((unsigned long long)num);
}

static unsigned long long	u_hh(t_state_machine *machine)
{
	unsigned char	num;

	num = (unsigned char)va_arg(*(machine->ap), int);
	return ((unsigned long long)num);
}

static unsigned long long	u_int(t_state_machine *machine)
{
	unsigned int	num;

	num = va_arg(*(machine->ap), unsigned int);
	return ((unsigned long long)num);
}

unsigned long long	u_va_arg(t_state_machine *machine)
{
	unsigned long long	num;
	static t_f_u_va_arg	f_u_va_arg[5] = {u_hh, u_ll, u_h, u_l, u_int};
	int	i;

	i = 0;
	while (i < NB_FLAG - 3)
	{
		if ((machine->flag & (1 << i)) != FALSE)
		{
			num = f_u_va_arg[i](machine);
			return (num);
		}
		i++;
	}
	num = (unsigned long long)f_u_va_arg[i](machine);
	return (num);
}
