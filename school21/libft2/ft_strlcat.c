#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ssize;
	size_t	dsize;
	size_t	i;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if (dstsize <= dsize)
		ssize += dstsize;
	else
		ssize += dsize;
	i = 0;
	while (src[i] && dsize + 1 < dstsize)
	{
		dst[dsize] = src[i];
		i++;
		dsize++;
	}
	dst[dsize] = '\0';
	return (ssize);
}
