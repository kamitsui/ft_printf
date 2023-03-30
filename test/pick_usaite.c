#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include "errno.h"
#include "string.h"

//#define FORMAT	"|%.%|,|%.%|,|%.%|,|%.%|,|%.%|\n"
//#define FORMAT	"|%.u|,|%.u|,|%.u|,|%.u|,|%.u|\n"
//#define FORMAT	"|%.%|,|%.%|,|%.%|,|%.%|,|%.%|\n"
//#define FORMAT	"|%.i|,|%.i|,|%.i|,|%.i|,|%.i|\n"
//#define FORMAT	"|%.0i|,|%.0i|,|%.0i|,|%.0i|,|%.0i|\n"
//#define FORMAT	"|%.0d|,|%.0d|,|%.0d|,|%.0d|,|%.0d|\n"
//#define FORMAT	"|%d|,|%d|,|%d|,|%d|,|%d|\n"
//#define FORMAT	"|%.u|,|%.u|,|%.u|,|%.u|,|%.u|\n"
//#define FORMAT	"|%.0u|,|%.0u|,|%.0u|,|%.0u|,|%.0u|\n"
//#define FORMAT	"|%.p|,|%.p|,|%.p|,|%.p|,|%.p|\n"
//#define FORMAT	"|%#.x|,|%#.x|,|%#.x|,|%#.x|,|%#.x|\n"//segment fault (ft_printf) modified Ok
//#define FORMAT	"|%#x|,|%#x|,|%#x|,|%#x|,|%#x|\n"
//prec <- int cast <- long long num
//#define FORMAT_NG		"%30000000000000i"
#define FORMAT		"%.30000000000000i"
//#define FORMAT		"%.4294967284i"// -12 == (int)(UINT_MAX - 12) == (int)(4294967284)  "42"
//#define SIZE		4294967284//(int) -> -12 "42"
//#define FORMAT		"%.4294967304i"// 8 == (int)(UINT_MAX + 8) == (int)(4294967304)  "00000042"
//#define FORMAT_NG		"%.2147483647i"
//#define SIZE		2147483647
//#define FORMAT_NG		"%.2147483648i"
//#define SIZE		2147483648
//#define FORMAT		"%.4294967284s"
//#define FORMAT		"%.5d"
//#define ARG		(void *)0
//#define ARG		0
#define ARG		42
//#define ARG		"42"
//#define ARG		-42

//static void	err_case(void)
//{
//	int	r;
//	ft_printf("\n");
//	ft_printf("err cace ---------\n\n");
////	printf("printf---------\n");
////	r = printf(FORMAT, ARG);
////	printf("errno:%i  message:%s\n", errno, strerror(errno));
////	printf("r:%d\n", r);
//	ft_printf("ft_printf---------\n");
//	r = ft_printf(FORMAT_NG, ARG);
//	ft_printf("errno:%i  message:%s\n", errno, strerror(errno));
//	ft_printf("r:%d\n", r);
//}

int	main(void)
{
	int	r = 0;
//	int	size = 0;
	printf("printf---------\n");
//	r = printf(FORMAT);
	r = printf(FORMAT, ARG);
//	r = printf(FORMAT_NG, ARG);
//	size = (int)(SIZE - INT_MAX);
//	size = (size_t)SIZE;
//	printf("\nsize:%d\n", size);
//	r = printf(FORMAT, ARG, ARG, ARG, ARG, ARG);
	printf("\nr:%d\n", r);
	printf("ft_printf---------\n");
//	r = ft_printf(FORMAT);
	r = ft_printf(FORMAT, ARG);
//	r = ft_printf(FORMAT, ARG, ARG, ARG, ARG, ARG);
	ft_printf("\nr:%d\n", r);
//	err_case();
//	printf("%u\n", 4294967284U);
//	printf("%d\n", (int)4294967284);
//	printf("%zu\n", (size_t)4294967284);
//	printf("%d\n", (int)4294967295);//INT_MAX
//	printf("%d\n", (int)4294967296);
//	printf("%d\n", (int)4294967304);
//	printf("%zu\n", (size_t)4294967304);
}
