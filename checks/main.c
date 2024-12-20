#include "check.h" // include checks
#include <assert.h>
int main(void)
{
	//checks invoked here
	assert(check_ifiles());
	assert(check_fun());
	assert(check_return_err());
	return (0);
}