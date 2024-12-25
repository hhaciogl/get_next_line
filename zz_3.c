void ok(int expr, char *msg);
int is(char *s1, char *s2);
#include <fcntl.h>
#include <string.h>
#define BUFFER_SIZE 4
#include "get_next_line.h"

void ok_3()
{
    int fd;
    char exp[4];
    char *act;

    fd = open("data2.txt", O_RDONLY);
    act = get_next_line(fd);
    strcpy(exp, "123");
    
    ok(is(act, exp), "return new line when lines and buffer same size");
}
