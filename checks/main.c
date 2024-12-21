#include "check.h" // include checks
#include <assert.h>
int main(void)
{
	//checks invoked here
	assert(check_if_source_files_exist());
	assert(check_function_prototype());
	assert(check_error_return_null());
	return (0);
}