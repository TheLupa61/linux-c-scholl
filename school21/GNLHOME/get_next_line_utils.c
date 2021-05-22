#include "get_next_line.h"

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

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