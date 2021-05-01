#include "libft.h"

void	fr_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
