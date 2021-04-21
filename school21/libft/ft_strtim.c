#include "libft.h"

static unsigned int  ft_isset(char c, char const *set)
{
  while (*set)
  {
    if (c == *set)
      return (1);
    set++;
  }
  return (0);
}

char        *ft_strtrim(char const *s1, char const *set)
{
  int        i;
  unsigned int  str_size;
  char      *start;
  char      *end;
  char      *str;

  if (!s1 || !set)
    return (NULL);
  i = 0;
  while (s1[i] && ft_isset(s1[i], set))
    i++;
  start = (char *)&s1[i];
  if ((i = ft_strlen(s1) - 1) != -1)
    while (i >= 0 && ft_isset(s1[i], set))
      i--;
  end = (char *)&s1[i];
  if (!*s1 || end == start)
    str_size = 2;
  else
    str_size = end - start + 2;
  if (!(str = malloc(sizeof(char) * str_size)))
    return (NULL);
  ft_strlcpy(str, start, str_size);
  return (str);
}