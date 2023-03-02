#include	<stdio.h>
#include	<stdlib.h>
//#include	"ft_printf.h"
void	ft_printf(char *input, ...);

int	main(int ac, char **av)
{
	if (ac > 2)
		return (0);
	//printf("abc");
	ft_printf(av[1]);
	ft_printf("\n");
	system("leaks a.out");
	return (0);
}
