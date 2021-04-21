#include "libft.h"

char *ft_strdup(const char *str)
{
    size_t len;
    char *str1;
    int i;

    len = ft_strlen(str);
    str1 = (char *)malloc(sizeof(char) * (len + 1));
    if(str1 == NULL)
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