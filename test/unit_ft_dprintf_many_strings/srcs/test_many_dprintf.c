#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	int	i;
	int	j;

	ft_printf("start\n");
	fd = open("debug.log",
				O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	j = 0;
	while (j < 1024)
	{
		i = 0;
		while (i < 10)
		{
			ft_dprintf(fd, "%d", i);
			i++;
		}
		j++;
	}
	ft_printf("end\n");
	close (fd);
	return (0);
}
