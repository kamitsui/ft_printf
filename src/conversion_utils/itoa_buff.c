

//#include <stddef.h>
//#include <stdarg.h>
//#include "libft.h"
#include "ft_printf.h"
#include "process.h"

static char	get_digit(unsigned int num, int base, t_state_machine *machine)
{
	num %= base;
	if (base == 8 || base == 10)
		return (num + '0');
	else
	{
		if ((machine->flag & X_CONV) == TRUE)
			return (num + 'a');
		else
			return (num + 'A');
	}
}

static int	itoa_len(unsigned int num, int base)
{
	int	len;

	len = 2;
	if (num < (unsigned int)base)
		return (len);
	while (num >= (unsigned int)base)
	{
		len++;
		num /= base;
	}
	return (len);
}

//IDEA change of name ... t_state_machine -> t_st_machine
char	*itoa_buff(unsigned int num, char *str, int base, t_state_machine *machine)
{
	int	len;

	len = itoa_len(num, base);
	str[len] = '\0';
	len--;
	while (len > 0)
	{
		str[len] = get_digit(num, base, machine);
		num /= base;
		len--;
	}
	return (str);
}
