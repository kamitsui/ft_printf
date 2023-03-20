#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int i;
	printf("---- printf ----\n");
	i = printf("1234567890");
	printf("\t%d:'1234567890'\n", i);
	i = printf("");
	printf("\t\t%d:''\n", i);
	printf("---- ft_printf ----\n");
	i = ft_printf("1234567890");
	ft_printf("\t%d:'1234567890'\n", i);
	i = ft_printf("");
	ft_printf("\t\t%d:''\n", i);
	printf("\n---- s , d ----\n");
	i = printf("%s%d", "1234567890", 1234567890);
	printf("\t%d:'1234567890' + 1234567890\tprintf\n", i);
	i = ft_printf("%s%d", "1234567890", 1234567890);
	ft_printf("\t%d:'1234567890' + 1234567890\tft_printf\n", i);
	return (0);
}
