#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd_fd(s, fd);
	write(fd, "\n", 1);
}
