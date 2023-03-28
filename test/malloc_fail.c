#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

void	*malloc(size_t size)
{
	(void)size;
	return (NULL);
}

int	main(void)
{
	int	result = ft_printf("\n");
	if (result == -1)
		printf("%d: does not abort OK\n", result);
	return (0);
}
