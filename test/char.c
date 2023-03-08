#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i;

	ft_printf("---- %%c ----\n");
	printf("printable 0x20( )~0x7e(~)\n");
	i = 0x20;
	while (i < 0x7f)
	{
		printf("\t%x (%c) printf\n", i, (char)i);
		ft_printf("\t%x (%c) ft_printf\n", i, (char)i);
		i++;
	}
	printf("not printable 0x00(nul)~0x1f(us), 0x7f(del)\n");
	i = 0x00;
	while (i < 0x1f)
	{
		printf("\t%x (%c) printf\n", i, (char)i);
		ft_printf("\t%x (%c) ft_printf\n", i, (char)i);
		i++;
	}
	i = 0x7f;
	printf("\t%x (%c) printf\n", i, (char)i);
	ft_printf("\t%x (%c) ft_printf\n", i, (char)i);

	printf("%c<-(null) printf\n", 0x0);
	ft_printf("%c<-(null) ft_printf\n", 0x0);
	printf("unsigned char 0x80~0xff\n");
	i = 0x80;
	while (i < 0xff)
	{
		printf("\t%x (%c) printf\n", i, (unsigned char)i);
		ft_printf("\t%x (%c) ft_printf\n", i, (unsigned char)i);
		i++;
	}
	printf("\t%x (%c) printf\n", i, (unsigned char)i);
	ft_printf("\t%x (%c) ft_printf\n", i, (unsigned char)i);
	return 0;
}
