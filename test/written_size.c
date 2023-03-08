#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int i;
	printf("---- printf ----\n");
	i = printf("1234567890\n");
	printf("%d:above size (include \\n)\n", i);
	i = printf("");
	printf("%d:above size (include \\n)\n", i);
	printf("---- ft_printf ----\n");
	i = ft_printf("1234567890\n");
	ft_printf("%d:above size (include \\n)\n", i);
	i = ft_printf("");
	ft_printf("%d:above size (include \\n)\n", i);
	return (0);
}
