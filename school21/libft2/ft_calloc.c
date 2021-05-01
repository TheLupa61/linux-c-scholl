#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_zero;

	mem_zero = malloc(nmemb * size);
	if (!mem_zero)
		return (NULL);
	ft_bzero(mem_zero, nmemb * size);
	return (mem_zero);
}
