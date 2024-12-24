#include "../checks.h"


static int when_there_is_an_error()
{
	return (1); 
}

static int when_there_is_nomore_line_to_read()
{
	return (1);
}


int it_should_return_null(char **msg)
{
	int it_should_return_null;
	
	it_should_return_null = \
	when_there_is_an_error() &&
	when_there_is_nomore_line_to_read();
	

	*msg = (char *)__func__;
	return (it_should_return_null);
}
