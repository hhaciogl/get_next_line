C_FILES = t/main.c get_next_line_utils.c get_next_line.c

all: norm test

test: run
	./run

norm:
	norminette get_next_line.h get_next_line.c get_next_line_utils.c

run: $(C_FILES) get_next_line.h
	cc -Wall -Wextra -Werror $(C_FILES) -o run

clean:
	run

re:
	@until make $(all); do sleep 5; done

.PHONY: test all clean norm