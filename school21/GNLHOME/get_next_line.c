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

int	get_next(int fd, char **line, *remainder)
{
	char		*buffer;
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

GNL		*new_linked_line(int fd)
{
	GNL *new;

	new = (GNL *)malloc(sizeof(GNL));
	new->fd = fd;
	new->next = NULL;
	return (new);
}

int 	get_next_line(int fd, char **line)
{
	static GNL	*head;
	GNL			*tmp;

	if (head == NULL)
		head = new_linked_line(fd);
	while (tmp->remainder)
	get_next(head->fd, line, head->remainder);

}