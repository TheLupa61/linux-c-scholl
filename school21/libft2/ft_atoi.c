#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	int			num;

	i = 0;
	num = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			num = -1;
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i += (*str - 48);
		if (i > 2147483647 && num == 1)
			return (-1);
		if (i > 2147483648 && num == -1)
			return (0);
		str++;
	}
	return ((int)(i * num));
}
