#include "libft.h"
#include <unistd.h>

void	ft_putend_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}