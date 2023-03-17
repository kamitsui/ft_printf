/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argments_nomal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:52:33 by kamitsui          #+#    #+#             */
/*   Updated: 2023/03/17 20:06:25 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf("\t%d,%d,%d,%d,%d\tprintf\n", i1, i2, i3, i4, i5);
	ft_printf("\t%d,%d,%d,%d,%d\tft_printf\n", i1, i2, i3, i4, i5);
	i1=-1, i2=-10, i3=-100, i4=INT_MIN;
	//ft_printf("%d,%d,%d,%d\n", -1, -10, -100, INT_MIN);
	printf("\t%d,%d,%d,%d\tprintf\n", i1, i2, i3, i4);
	ft_printf("\t%d,%d,%d,%d\tft_printf\n", i1, i2, i3, i4);
	ft_printf("---- %%i ----\n");
	printf("\t%i,%i,%i,%i,%i\tprintf\n", 0, 1, 10, 100, INT_MAX);
	ft_printf("\t%i,%i,%i,%i,%i\tft_printf\n", 0, 1, 10, 100, INT_MAX);
	printf("\t%i,%i,%i,%i\tprintf\n", -1, -10, -100, INT_MIN);
	ft_printf("\t%i,%i,%i,%i\tft_printf\n", -1, -10, -100, INT_MIN);
	ft_printf("---- %%u ----\n");
	printf("\t%u,%u,%u,%u,%u,%u,%u\tprintf\n", 0, 1, 10, 100, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("\t%u,%u,%u,%u,%u,%u,%u\tft_printf\n", 0, 1, 10, 100, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%lu ----\n");
	printf("\t%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu\tprintf\n",
		   	0L, 1L, 10L, 100L, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("\t%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu\tft_printf\n",
		   	0L, 1L, 10L, 100L, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("---- %%llu ----\n");
	printf("\t%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu\tprintf\n",
			0LL, 1LL, 10LL, 100LL, (unsigned long long)INT_MAX,
			(unsigned long long)UINT_MAX, (unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("\t%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu\tft_printf\n",
			0LL, 1LL, 10LL, 100LL, (unsigned long long)INT_MAX,
			(unsigned long long)UINT_MAX, (unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("---- %%o ----\n");
	printf("\t%o,%o,%o,%o,%o\tprintf\n", 00, 077, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("\t%o,%o,%o,%o,%o\tft_printf\n", 00, 077, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%lo ----\n");
	printf("\t%lo,%lo,%lo,%lo,%lo,%lo\tprintf\n",
			00L, 077L, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("\t%lo,%lo,%lo,%lo,%lo,%lo\tft_printf\n",
			00L, 077L, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("---- %%llo ----\n");
	printf("\t%llo,%llo,%llo,%llo,%llo,%llo,%llo\tprintf\n",
			00LL, 077LL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX,
			(unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	printf("\t%llo,%llo,%llo,%llo,%llo,%llo,%llo\tprintf\n",
			00LL, 077LL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX,
			(unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("---- %%x ----\n");
	printf("\t%x,%x,%x,%x,%x\tprintf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("\t%x,%x,%x,%x,%x\tft_printf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%lx ----\n");
	printf("\t%lx,%lx,%lx,%lx,%lx,%lx\tprintf\n", 0x0L, 0xFFL, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("\t%lx,%lx,%lx,%lx,%lx,%lx\tft_printf\n", 0x0L, 0xFFL, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, (unsigned long)ULONG_MAX, ULONG_MAX+1);
	ft_printf("---- %%llx ----\n");
	printf("\t%llx,%llx,%llx,%llx,%llx,%llx,%llx\tprintf\n", 0x0LL, 0xFFLL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX, (unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("\t%llx,%llx,%llx,%llx,%llx,%llx,%llx\tft_printf\n", 0x0LL, 0xFFLL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX, (unsigned long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("---- %%X ----\n");
	printf("\t%X,%X,%X,%X,%X\tprintf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("\t%X,%X,%X,%X,%X\tft_printf\n", 0x0, 0xFF, INT_MAX, UINT_MAX, UINT_MAX+1);
	ft_printf("---- %%lX ----\n");
	printf("\t%lX,%lX,%lX,%lX,%lX,%lX\tprintf\n", 0x0L, 0xFFL, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("\t%lX,%lX,%lX,%lX,%lX,%lX\tft_printf\n", 0x0L, 0xFFL, (unsigned long)INT_MAX, (unsigned long)UINT_MAX, ULONG_MAX, ULONG_MAX+1);
	ft_printf("---- %%llX ----\n");
	printf("\t%llX,%llX,%llX,%llX,%llX,%llX\tprintf\n", 0x0LL, 0xFFLL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX, (unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("\t%llX,%llX,%llX,%llX,%llX,%llX\tft_printf\n", 0x0LL, 0xFFLL, (unsigned long long)INT_MAX, (unsigned long long)UINT_MAX, (unsigned long long)ULONG_MAX, ULLONG_MAX, ULLONG_MAX+1);
	ft_printf("---- %%p ----\n");
	char c='p';	char s[10]="123456789"; int i=42; char *h=ft_strnew(42);
	printf("\t%p,%p,%p,asdf:%p,c:%p,s:%p,i:%p,h:%p,%lu:%p\tprintf\n", (char *)0, (char *)1, (char *)0xff, "asdf", &c, &s[0], &i, &h[0], ULONG_MAX, (char *)~0);
	ft_printf("\t%p,%p,%p,asdf:%p,c:%p,s:%p,i:%p,h:%p,%lu:%p\tft_printf\n", (char *)0, (char *)1, (char *)0xff, "asdf", &c, &s[0], &i, &h[0], ULONG_MAX, (char *)~0);
	free(h);
	// %c test is char.c
	printf("---- %%s ----\n");
	printf("\t%s\n", "42 tokyo");
	ft_printf("\t%s\n", "42 tokyo");
	printf("\t%s\n", (char *)0);
	ft_printf("\t%s\n", (char *)0);
//	conversion is not
	printf("---- %%a ---- NG format\n");
//	printf("%a\n", 42);//compile error
	int r;
	r = printf("\tDoes not compile\tprintf('%%a\\n', 42)");
	printf("return:%d\n", r);
	r = ft_printf("%a\n", 42);//
	if (r == -1)
	{
		ft_printf("\tERROR\tmismatch format\tft_printf('%%a\\n', 42)");
		ft_printf("return:%d\n", r);
	}
	printf("----- mismatch type ---- \n");
	printf("\tDose not compile\tprintf('%%d\\n', 'asdfg')\n");
	ft_printf("\t%d <- written by ft_printf('%%d\\n', 'asdfg')\tthis case undefine\n", "asdfg");
	printf("---- argments shortage ----\n");
	printf("\tDoes not compile\tprintf('%%d%%d%%d\\n', 4, 2)\n");
	ft_printf("\t%d%d%d <- written by ft_printf('%%d%%d%%d', 4, 2)\tthis case undefine\n", 4, 2);
	printf("---- no write ----\n");
	r = printf("");
	printf("\t%d = printf('')\n", r);
	r = ft_printf("");
	ft_printf("\t%d = ft_printf('')\n", r);
	system("leaks a.out");
	return 0;
}
