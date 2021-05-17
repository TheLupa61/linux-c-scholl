#include "get_next_line.h"

char  *check_rem(char *rem, char **line)
{
    char *p_n;

    p_n = NULL;
    if (rem)
    {
        if ((p_n = ft_memchr(rem, '\n')))
        {
            *p_n = '\0';
            *line = ft_strdup(rem);
            ft_strcpy(rem, ++p_n);
        }
        else
        {
            *line = ft_strdup(rem);
            
        }
    }
}

int get_next_line(int fd, char **line)
{
    static char *rem;
    char        buf[BUFF_SIZE + 1];
    int         byte_was_read;
    char        *p_n;
    char        *tmp;

    p_n = check_rem(rem, line);
    while (!p_n && (byte_was_read = read(fd, buf, BUFF_SIZE)))
    {
        buf(byte_was_read) = '\0';
        if ((p_n = ft_memchr(buf, '\n')))
        {
            *p_n = '\0';
            p_n++;
            rem = ft_strdup(p_n);
        }
        tmp = *line;
        *line = ft_strjoin(*line, buf);
        free(tmp);
    }
    return (0);
}