#include "h.h"
#include "../get_next_line.h"
#include <fcntl.h>
#include <string.h>

void test1(char *msg)
{
    int fd;

    (void)msg
    fd = open("text_with_4_buff.txt", O_RONLY);
    ok(strcmp(get_next_line(fd), "///\n") == 0, "should read text files");
    close(fd);
}

void test2(char *msg)
{
    int fd;

    (void)msg;
    fd = open("text_with_4_buff.txt", O_RONLY);
    ok(strrchr(get_next_line(fd), '\n'), "should return a newline if file has one");
    close(fd);
}

void test3(char *msg)
{
    (void)msg;
    fail("should read stdin");
}

void test4(char *msg)
{
    (void)msg;
    fail("shouldnt read binary");
}

void test5(char *msg)
{
    (void)msg;
    fail("should use BUFFER_SIZE for read()");
}

void test6(char *msg)
{
    (void)msg;
    int fd;
    
    fd = 4;
    ok((get_next_line(fd) == NULL),"should return null if there is an error");
}

void test7(char *msg)
{
    (void)msg;
    int fd;

    
    fail("should return null if there is nothing to read");
}

void test8(char *msg)
{
    (void)msg;
    fail("should read 1k line");
}

void test9(char *msg)
{
    (void)msg;
    fail("should read 2k line");
}

void test10(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 1");
}

void test11(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 2");
}

void test12(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 8");
}

void test13(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 42");
}

void test14(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 200");
}

void test15(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 1000");
}

void test16(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 5000");
}

void test17(char *msg)
{
    (void)msg;
    fail("should work with BUFFER_SIZE 10000000");
}

int main()
{
    
    test1("should read text files");
    test2("should return a newline if file has one");
    test3("should read stdin");
    test4("shouldnt read binary");
    test5("should use BUFFER_SIZE for read()");
    test6("should return null if there is an error");
    test7("should return null if there is nothing to read");
    test8("should read 1k line");
    test9("should read 2k line");
    test10("should work with BUFFER_SIZE 1");
    test11("should work with BUFFER_SIZE 2");
    test12("should work with BUFFER_SIZE 8");
    test13("should work with BUFFER_SIZE 42");
    test14("should work with BUFFER_SIZE 200");
    test15("should work with BUFFER_SIZE 1000");
    test16("should work with BUFFER_SIZE 5000");
    test17("should work with BUFFER_SIZE 10000000");
    exit_status();
}