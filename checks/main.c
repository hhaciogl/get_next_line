#include "check.h" // include checks
#include <assert.h>
int main(void)
{
	//checks invoked here
	assert(check_ifiles());
	assert(check_fun());
	return (0);
}