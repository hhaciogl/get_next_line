#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*buf;
	ssize_t	bytes; 
	
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
	return (buf);
}
