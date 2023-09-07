#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		ret;
	static char	*strings[4] = {"abcd\n", "42tokyo\n", "hello world\n", NULL};
	int		fd;
	int		i;

	ret = 0;
	ret = ft_printf("%d Tokyo\t[%d]\n", 42, ret);
	ret = ft_printf("%s\t[%d]\n", strings[0], ret);
	fd = open("debug.log",
				O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	i = 0;
	while (strings[i] != NULL)
	{
		ret = ft_dprintf(fd, strings[i]);
		i++;
	}
	ft_printf("end\n");
	close (fd);
	return (0);
}
