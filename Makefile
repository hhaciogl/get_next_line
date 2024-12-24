OK = $(wildcard ok/*.c)

NAME = start_testing

TEST_SRC =  ok_main.c \
			checks.c  \
			$(OK)

PROG_SRC =  get_next_line_utils.c \
			get_next_line.c

ALL: $(NAME) RUN
	
RUN:
	@clear && echo 1..$(words $(OK)) && ./$(NAME)

$(NAME): $(TEST_SRC) $(PROG_SRC)
	cc -Werror -Wextra -Wall $^ -o $@

CLEAN:
	rm $(NAME)

PHONY: ALL CLEAN RUN