#include "libft.h"

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
