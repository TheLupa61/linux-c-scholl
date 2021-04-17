#include "libft.h"
#include <stdio.h>  //Для printf

void *ft_memcpy (void *destination, const void *source, size_t n)
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
   ft_memcpy(src2, src, 5);

   // Вывод массива src на консоль
   printf("src: %s\n",src2);

   return 0;
}