#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
//	printf("\nprintf\tdiouxXpsc%a\n");//compile error
	ft_printf("\nft_printf\tdiouxXpsc%a\t--\tprintf compile error\n");
	ft_printf("\nft_printf\tdiouxXpsc%%a\t--\t");
	printf("printf\tdiouxXpsc%%a\n");
	return 0;
}
