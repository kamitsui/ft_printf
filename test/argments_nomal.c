#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("---- %%d ----\n");
	int i1=0, i2=1, i3=10, i4=100, i5=INT_MAX;
	//ft_printf("%d,%d,%d,%d,%d,%d\n", 0, 1, 10, 100, INT_MAX);
	ft_printf("%d,%d,%d,%d,%d\n", i1, i2, i3, i4, i5);
	i1=-1, i2=-10, i3=-100, i4=INT_MIN;
	//ft_printf("%d,%d,%d,%d\n", -1, -10, -100, INT_MIN);
	ft_printf("%d,%d,%d,%d\n", i1, i2, i3, i4);
	ft_printf("---- %%i ----\n");
	ft_printf("%i,%i,%i,%i,%i\n", 0, 1, 10, 100, INT_MAX);
	ft_printf("%i,%i,%i,%i\n", -1, -10, -100, INT_MIN);
	ft_printf("---- %%u ----\n");
	ft_printf("%u,%u,%u,%u,%u,%u,%u\n", 0, 1, 10, 100, INT_MAX, UINT_MAX, UINT_MAX+1);
	return 0;
}
