#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*sep;

	if (s)
	{
		i = 0;
		sep = (char *) s;
		while (sep[i])
		{
			if (sep[i] == c)
				return (&sep[i]);
			i++;
		}
		if (c == '\0')
			return (&sep[i]);
	}
	return (0);
}
