#include <stdio.h>
#include <string.h>

int ok(int expr)
{
	static int number;

	number++;
	if (expr)
	{
		printf("ok %d\n", number);
	}
	else
    {
		printf("not ok %d\n", number);
    }
}

int is(char *str1, char *str2)
{
	if (NULL == str1 && NULL == str2)
		return (1);
	else if (NULL == str1 || NULL == str2)
		return (0);
	else
		return(0 == strcmp(str1, str2));
}

int assert_ok(int expr)
{
	if (!expr)
	{
		fprintf(stderr, "Assertion failed: %s, function %s, file %s, line %d.\n", #cond, __func__, __FILE__, __LINE__);
		return (0);
	}
	return (1);
}