#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*buf;
	ssize_t	bytes; 
	ssize_t nl;

	buf = malloc(BUFFER_SIZE + 1);
	if (NULL == buf)
	{
		return (NULL);
	}
	bytes = read(fd, buf, BUFFER_SIZE);
	if (0 >= bytes)
	{
		return (NULL);
	}
	buf[BUFFER_SIZE + 1] = '\0';

	nl = ft_search_nl(buf);
	if (0 <= nl && nl != BUFFER_SIZE - 1)
	{
		buf[nl + 1] = '\0';
	}
	return (buf);
}

