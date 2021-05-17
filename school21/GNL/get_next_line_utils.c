#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_zero;

	mem_zero = malloc(nmemb * size);
	if (!mem_zero)
		return (NULL);
	ft_bzero(mem_zero, nmemb * size);
	return (mem_zero);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len-- > 0)
		*p++ = c;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str1;
	int		i;

	len = ft_strlen(str);
	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (str1 == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}