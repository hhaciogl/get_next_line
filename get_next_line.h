#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif

#include <unistd.h>
#include <stdlib.h>
char	*get_next_line(int fd);
ssize_t	ft_search_nl(char * str);

#endif
