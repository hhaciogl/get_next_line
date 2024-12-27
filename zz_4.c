void ok(int expr, char *msg);
int is(char *s1, char *s2);
#include <fcntl.h>
#include <string.h>
#include "get_next_line.h"

void ok_4()
{
	int fd;
    char exp[9];
    char *act;

    fd = open("data3.txt", O_RDONLY);
    act = get_next_line(fd);
    strcpy(exp, "123\n\0");
    
    ok(is(act, exp), "return new line when lines is smaller than buffer");
}
