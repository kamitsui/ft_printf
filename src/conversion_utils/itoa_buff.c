
#include "libft.h"
#include "ft_printf.h"
#include "process.h"

static char	get_digit(unsigned long num, int base, t_state_machine *machine)
{
	num %= base;
	if (base == 8 || base == 10 || num < 10)
		return (num + '0');
	else
	{
		num -= 10;
		if ((machine->flag & (X_CONV | P_CONV)) != FALSE)
			return (num + 'a');
		else
			return (num + 'A');
	}
}

static int	itoa_len(unsigned long num, long base)
{
	int	len;

	len = 1;
	if (num < (unsigned long)base)
		return (len);
	while (num >= (unsigned long)base)
	{
		len++;
		num /= base;
	}
	return (len);
}

//IDEA change of name ... t_state_machine -> t_st_machine
char	*itoa_buff(unsigned long num, char *str, int base, t_state_machine *machine)
{
	int	len;

	len = itoa_len(num, base);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = get_digit(num, base, machine);
		num /= base;
		len--;
	}
	return (str);
}
