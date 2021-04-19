#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    unsigned char *c1;
    unsigned char *c2;

    c1 = (unsigned char *)haystack;
    c2 = (unsigned char *)needle;
    if (c2[0] == '\0')
        return (c1);
    j = 0;
    while (j < len && c1[j])
    {
        i = 0;
        while (j < len && c2[i] && c1[j] && c2[i] == c1[j])
        {
            ++i;
            ++j;
        }
        if (c2[i] == '\0')
            return (&c1[j - i]);
        j = j - i + 1;
    }
    return (0);
}

int main()
{

    char    *s1 = "MZIRIBMZERIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = strlen(s2);

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}