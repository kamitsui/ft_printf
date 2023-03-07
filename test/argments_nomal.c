#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("---- %%d ----\n");
	int i1=0, i2=1, i3=10, i4=100, i5=INT_MAX;
	//ft_printf("%d,%d,%d,%d,%d,%d\n", 0, 1, 10, 100, INT_MAX);
	printf("%d,%d,%d,%d,%d\tprintf\n", i1, i2, i3, i4, i5);
	ft_printf("%d,%d,%d,%d,%d\tft_printf\n", i1, i2, i3, i4, i5);
	i1=-1, i2=-10, i3=-100, i4=INT_MIN;
	//ft_printf("%d,%d,%d,%d\n", -1, -10, -100, INT_MIN);
	printf("%d,%d,%d,%d\tprintf\n", i1, i2, i3, i4);
	ft_printf("%d,%d,%d,%d\tft_printf\n", i1, i2, i3, i4);
	ft_printf("---- %%i ----\n");
	printf("%i,%i,%i,%i,%i\tprintf\n", 0, 1, 10, 100, INT_MAX);
	ft_printf("%i,%i,%i,%i,%i\tft_printf\n", 0, 1, 10, 100, INT_MAX);
	printf("%i,%i,%i,%i\tprintf\n", -1, -10, -100, INT_MIN);
	ft_printf("%i,%i,%i,%i\tft_printf\n", -1, -10, -100, INT_MIN);
	ft_printf("---- %%u ----\n");
	printf("%u,%u,%u,%u,%u,%u,%u\tprintf\n", 0, 1, 10, 100, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("%u,%u,%u,%u,%u,%u,%u\tft_printf\n", 0, 1, 10, 100, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%o ----\n");
	printf("%o,%o,%o,%o,%o\tprintf\n", 00, 077, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("%o,%o,%o,%o,%o\tft_printf\n", 00, 077, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%x ----\n");
	printf("%x,%x,%x,%x,%x\tprintf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("%x,%x,%x,%x,%x\tft_printf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%X ----\n");
	printf("%X,%X,%X,%X,%X\tprintf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("%X,%X,%X,%X,%X\tft_printf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%lX ----\n");
	printf("%lX,%lX,%lX\tprintf\n", (long)UINT_MAX, (long)UINT_MAX+1, LONG_MAX);
	return 0;
}
