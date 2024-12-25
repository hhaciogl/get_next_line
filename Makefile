ZZ = $(wildcard zz_*.c)


FILE_COUNT = $(words $(wildcard zz*.c))

NAME = start_testing

ZZ_SRC =  zz.c $(ZZ)

PROG_SRC =  get_next_line_utils.c get_next_line.c

all: $(NAME) run
	
run:
	@clear && echo 1..$(words $(ZZ)) && ./$(NAME)

$(NAME): $(ZZ_SRC) $(PROG_SRC)
	cc -Werror -Wextra -Wall $^ -o $@

newtest:
	echo "void ok(int expr, char *msg);\n\
int is(char *s1, char *s2);\n\n\
void ok_$(FILE_COUNT)()\n{\n}" > zz_$(FILE_COUNT).c 

clean:
	rm $(NAME)

PHONY: all clean run
