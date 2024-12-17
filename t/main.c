#include "h.h"
#include "../get_next_line.h"

int main()
{
    pass("should read text files");
    pass("should read stdin");
    pass("shouldnt read binary");
    pass("should return a newline if file has one");
    pass("should use BUFFER_SIZE for read()");
    pass("should return null if there is an error");
    pass("should return null if there is nothing to read");
    pass("should read 1k line");
    pass("should read 2k line");
    pass("should read 5mb line");
    pass("should read 1GB line");
    pass("should work with BUFFER_SIZE 1");
    pass("should work with BUFFER_SIZE 2");
    pass("should work with BUFFER_SIZE 4");
    pass("should work with BUFFER_SIZE 8");
    pass("should work with BUFFER_SIZE 42");
    pass("should work with BUFFER_SIZE 200");
    pass("should work with BUFFER_SIZE 1000");
    pass("should work with BUFFER_SIZE 5000");
    pass("should work with BUFFER_SIZE 10000000");
    exit_status();
}