#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	str;

	i = ft_strlen(s);
	str = c;
	while (i >= 0)
	{
		if (s[i] == str)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
