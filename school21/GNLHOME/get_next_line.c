#include "get_next_line.h"

static char	*check_start_remainder(char *remainder)
{
	int		i;
	char	*tmp;

	if (!remainder)
		return (0);
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
		i++;
	tmp = malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
	{
		tmp[i] = remainder[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	*check_end_remainder(char *remainder)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!remainder)
		return (0);
	while (remainder[i] && remainder[i] != '\n')
		i++;
	if (!remainder[i])
	{
		free(remainder);
		return (0);
	}
	tmp = malloc(sizeof(char) * ((ft_strlen(remainder) - i) + 1));
	if (!tmp)
		return (0);
	i++;
	while (remainder[i])
		tmp[j++] = remainder[i++];
	tmp[j] = '\0';
	free(remainder);
	return (tmp);
}

static int	ft_error(char *buffer)
{
	free(buffer);
	return (-1);
}

int	get_next_line(int fd, char **line)
{
	char		*buffer;
	static char	*remainder;
	int			bytes_was_read;

	bytes_was_read = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || fd > 1024 || !line || BUFFER_SIZE <= 0 || !buffer)
		return (ft_error(buffer));
	while (!ft_strchr(remainder, '\n') && bytes_was_read != 0)
	{
		bytes_was_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_was_read < 0)
			return (ft_error(buffer));
		buffer[bytes_was_read] = '\0';
		remainder = ft_strjoin(remainder, buffer);
	}
	free(buffer);
	*line = check_start_remainder(remainder);
	remainder = check_end_remainder(remainder);
	if (!bytes_was_read)
		return (0);
	return (1);
}

#include <stdio.h>

typedef struct get_line
{
    int num;
    char *line;
    struct get_line *next;
} GNL;

int main()
{
    char *line;
    int  fd;
    GNL *head;
    GNL *tmp;
    int num;

    fd = open("text2.txt", O_RDONLY);
    num = 0;
    head = (GNL *)malloc(sizeof(GNL));
    tmp = head;
    while (get_next_line(fd, &line))
    {
        tmp->next = (GNL *)malloc(sizeof(GNL));
        tmp->num = num;
        tmp->line = line;
        if (num == 0)
            head = tmp;
        num++;
        tmp = tmp->next;
    }
    tmp->next = NULL;

    while (head->next)
    {
        printf("%s\n", head->line);
        head = head->next;
    }
}