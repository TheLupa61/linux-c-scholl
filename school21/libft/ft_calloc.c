#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *mem = malloc(nmemb * size);
    ft_memset(mem, 0, nmemb * size);
    return (mem);
}