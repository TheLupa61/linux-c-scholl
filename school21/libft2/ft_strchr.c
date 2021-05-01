#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	sep;

	i = 0;
	sep = c;
	while (s[i])
	{
		if (s[i] == sep)
			return (s + i);
		i++;
	}
	return (NULL);
}
