#include "libft.h"

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
