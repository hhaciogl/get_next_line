#include "get_next_line.h"

char *ft_search_nl(char * str)
{
	if ('\n' == str[BUFFER_SIZE-1])
	{
		return "\n"; 
	}
	return ((void *)0);
}

