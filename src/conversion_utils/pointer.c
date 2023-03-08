
#include <stddef.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"

static void	add_prefix(t_state_machine *machine)
{
	add_to_buff('0', machine);
	add_to_buff('x', machine);
}

void	pointer(t_state_machine *machine)
{
	char			str[42];
	void			*p;
	int				base;
	size_t			len;
	size_t			i;

	base = 0x10;
	p = va_arg(*(machine->ap), void *);
	itoa_buff((unsigned long)p, str, base, machine);
	len = ft_strlen(str);
	add_prefix(machine);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
