#include "../get_next_line.h"

int check_error_return_null(void)
{
	char *result;

	result = get_next_line(7);

	return ((void *)0 == result);
}