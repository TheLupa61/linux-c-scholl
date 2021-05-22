#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 && !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	ft_memmove(str, s1, ft_strlen((char *)s1));
	ft_memmove(str + ft_strlen((char *)s1), s2, ft_strlen((char *)s2));
	free((char *)s1);
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*sep;

	if(s)
	{
		sep = (char *) s;
		i = 0;
		while (sep[i])
		{
			if(sep [i] == c)
				return (&sep[i]);
			i++;
		}
		if (c == '\0')
			return (&sep[i]);
	}
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (++i < len)
			d[i] = s[i];
	return (d);
}
