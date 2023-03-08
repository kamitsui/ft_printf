#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

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
	ft_printf("---- %%lX ---- not check\n");
	printf("%lX,%lX,%lX\tprintf\n", (long)UINT_MAX, (long)UINT_MAX+1, LONG_MAX);
	ft_printf("---- %%p ----\n");
	char c='p';	char s[10]="123456789"; int i=42; char *h=ft_strnew(42);
	printf("%p,%p,%p,asdf:%p,c:%p,s:%p,i:%p,h:%p,%lu:%p\tprintf\n", (void *)0, (void *)1, (void *)0xff, "asdf", &c, &s[0], &i, &h[0], ULONG_MAX, (void *)~0);
	free(h);
	ft_printf("%p,%p,%p,asdf:%p,c:%p,s:%p,i:%p,h:%p,%lu:%p\tft_printf\n", (void *)0, (void *)1, (void *)0xff, "asdf", &c, &s[0], &i, &h[0], ULONG_MAX, (void *)~0);
	return 0;
}
