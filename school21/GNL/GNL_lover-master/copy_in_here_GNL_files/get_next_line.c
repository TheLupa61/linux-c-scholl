#include "get_next_line.h"

static char	*next_reminder(char *rem)
{
	int		i;
	char	*tmp;

	if (!rem)
		return (0);
	i = 0;
	while (rem[i] && rem[i] != '\n')
		i++;
	tmp = malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (rem[i] && rem[i] != '\n')
	{
		tmp[i] = rem[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	*remv_reminder(char *rem)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!rem)
		return (0);
	while (rem[i] && rem[i] != '\n')
		i++;
	if (!rem[i])
	{
		free(rem);
		return (0);
	}
	tmp = malloc(sizeof(char) * ((ft_strlen(rem) - i) + 1));
	if (!tmp)
		return (0);
	i++;
	while (rem[i])
		tmp[j++] = rem[i++];
	tmp[j] = '\0';
	free(rem);
	return (tmp);
}

static int	error(char *buff)
{
	free(buff);
	return (-1);
}

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*rem;
	int			bread;

	bread = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || fd > 1024 || !line || BUFFER_SIZE <= 0 || !buff)
		return (error(buff));
	while (!ft_strchr(rem, '\n') && bread != 0)
	{
		bread = read(fd, buff, BUFFER_SIZE);
		if (bread < 0)
			return (error(buff));
		buff[bread] = '\0';
		rem = ft_strjoin(rem, buff);
	}
	free(buff);
	*line = next_reminder(rem);
	rem = remv_reminder(rem);
	if (!bread)
		return (0);
	return (1);
}
