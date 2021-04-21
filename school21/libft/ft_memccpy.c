#include "libft.h"

void *ft_memccpy (void *destination, const void *source, int c,size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t		i;
    
    i = 0;
    d = (unsigned char *)destination;
    s = (unsigned char *)source;
    while(i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
            return (&d[i + 1]);
        i++;
    }
    return (NULL);
}