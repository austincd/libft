#include "libft.h"

int	ft_create_file(char *filename)
{
	int fd;

	fd = open(filename, O_EXCL|O_RDWR|O_CREAT, 0777);
	return (fd);
}
