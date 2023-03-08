#include <stdarg.h>
#include "ft_printf.h"
#include "process.h"
#include "libft.h"

void	string(t_state_machine *machine)
{
	char	*str;
	size_t	len;
	size_t	i;

	str = va_arg(*(machine->ap), char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		add_to_buff(str[i], machine);
		i++;
	}
}
