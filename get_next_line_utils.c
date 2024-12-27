#include "get_next_line.h"

ssize_t ft_search_nl(char * str)
{
	ssize_t	i;

	i = 0;
	while (str[i])
	{
		if ('\n' == str[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

