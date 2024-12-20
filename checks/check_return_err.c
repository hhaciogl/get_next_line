#include "../get_next_line.h"

int check_return_err(void)
{
	char *result;

	result = get_next_line(7);

	return ((void *)0 == result);
}