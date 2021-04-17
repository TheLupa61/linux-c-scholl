#include <stdio.h>  //Для printf
#include <string.h>   //Для memset

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
 
   // Заполняем массив символом ‘1’
   memset(src, '1', 3);

   // Вывод массива src на консоль
   printf("src: %s\n",src);

   return 0;
}