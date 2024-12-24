#include "checks.h"

int main()
{
	char *_msg;
	ok(it_should_return_null(&_msg), _msg);
	return (0);
}