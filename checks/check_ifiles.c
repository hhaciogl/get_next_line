#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// fixture
char *get_actual(void);
char *get_expect(void);

int check_ifiles()
{
	char *actual;
	char *expect;
	int output;

	actual = get_actual();
	expect = get_expect();
	output = strcmp(expect, actual);
	free(actual);
	free(expect);
	return (output == 0);
}

char *get_actual()
{
	char *buf;
	int fd;

	buf = malloc(501);
	system("ls ../ > data/templs.txt");
	fd = open("data/templs.txt", O_RDONLY);
	read(fd, buf, 501);
	close(fd);
	return (buf);
}

char *get_expect()
{
	char *exp;
	int fd;

	exp = malloc(501);
	fd = open("data/lsexp.txt", O_RDONLY);
	read(fd, exp, 501);
	close(fd);
	return (exp);
}