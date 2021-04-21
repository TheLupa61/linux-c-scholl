#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    unsigned int    i;
    
    i = 0;
    if(!s)
        return (NULL);
    if(start > (unsigned int)ft_strlen(s))
        return (NULL);
    str = (char *)malloc(len + 1);
    if(!str)
        return (NULL);
    while (i < len && s[start])
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}