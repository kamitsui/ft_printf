
#include <stddef.h>
#include "libft.h"
#include "ft_printf.h"
#include "process.h"
#include "conversion.h"

void	hexadecimal(t_state_machine *machine)
{
	char				str[42];
	unsigned long long	num;
	int					base;
	size_t				len;
	size_t				i;

	base = 0x10;
	num = u_va_arg(machine);
	itoa_buff(num, str, base, machine);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
