#include "libft.h"
#include <stdio.h>

static int  ft_nb_s(const char *s, char c)
{
    size_t i;

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    return (i);
}

static void *ft_next_c(char const **s, char c)
{
    char *str;
    size_t i;

    i = 0;
    while ((*s)[i] && (*s)[i] != c)
        i++;
    str = ft_substr(*s, 0, i);
    if (str == NULL)
        return (NULL);
    *s += i;
    return(str);
}

static void  *ft_error(char **new_str, size_t t)
{
    while (t--)
        free(new_str[t]);
    free(new_str);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    char **new_s;
    size_t i;

    if (!s)
        return (NULL);
    new_s = (char **)malloc(sizeof(char *) * (ft_nb_s(s, c) + 1));
    if (new_s == NULL)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            new_s[i] = ft_next_c(&s, c);
            if (new_s[i] == NULL)
                return (ft_error(new_s, i));
            i++;
        }
    }
    new_s[i] = NULL;
    return (new_s);
}

int main (void)
{    
   // Массив со строкой для поиска
   char str [24]="test1/test2/test3/test4";
   // Набор символов, которые должны входить в искомый сегмент
   // Переменная, в которую будут заноситься начальные адреса частей
   // строки str
   char **istr;

   printf ("Исходная строка: %s\n", str);
   printf ("Результат разбиения:\n");
   // Выделение первой части строки
   istr = ft_split (str, '/');

   // Выделение последующих частей
   while (istr != NULL)
   {
      // Вывод очередной выделенной части
      printf ("%s\n",*istr);
      // Выделение очередной части строки
      istr = ft_split(NULL, '/');
   }

   return 0;
}