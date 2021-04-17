#include "libft.h"
#include <stdio.h>  //Для printf

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
        if (s[i] == (unsigned char) c)
            return (d[i + 1]);
        i++;
    }
    return (d);
}

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   unsigned char src2[15]="";
   // Заполняем массив символом ‘1’
   ft_memccpy(src2, src, '6', 10);

   // Вывод массива src на консоль
   printf("src: %s\n",src2);

   return 0;
}