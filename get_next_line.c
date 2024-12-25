#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
	(void)fd;
	char *buf;
	printf("%i", BUFFER_SIZE);
	buf = malloc(BUFFER_SIZE + 1);
	if (NULL == buf)
	{
		return (NULL);
	}
	return (buf);
}