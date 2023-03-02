#include	<stdio.h>
#include	<stdlib.h>
#include	"ft_printf.h"

int	main(void)
{
	ft_printf("12345");
	ft_printf("67890");
	ft_printf("qwertyuiop");
	system("leaks a.out");
	return (0);
}
