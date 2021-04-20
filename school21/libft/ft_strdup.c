#include "libft.h"

char *strdup(const char *str)
{
    size_t len;
    char *str1;
    char *t;

    len = ft_strlen(str);
    str1 = (char *)malloc(sizeof(char) * (len + 1));
    if(!str1)
        return (NULL);
    t = str1;
    while (*str1 && len--)
    {
        *str1++ = *str++;
    }
    *str1 = '\0';
    return (t);
}