#include "libft.h"

size_t strlcpy (char *dst, const char *src, size_t size)
{
    size_t i;

    i =0;
    while ((i < size) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while (i < size)
        dst[i++] = '\0';
    return (0);   
} C02