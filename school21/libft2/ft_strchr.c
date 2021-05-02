#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	sep;

	i = 0;
	sep = c;
	while (s[i] != sep)
		if (!s[i++])
			return (NULL);
	return ((char *)s + i);
}
