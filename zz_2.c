void ok(int expr, char *msg);
int is(char *s1, char *s2);
#include "get_next_line.h"
#include <fcntl.h>
#include <stddef.h>

void ok_2()
{
	int fd;
	char *expect;
	char *actual;
	
	fd = open("data1.txt", O_RDONLY);
	expect = NULL;
	actual = get_next_line(fd);

	ok(is(actual, expect), "return null when there is no more line");
}