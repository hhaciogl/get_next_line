ZZ = $(wildcard zz_*.c)

NAME = start_testing

ZZ_SRC =  zz.c $(ZZ)

PROG_SRC =  get_next_line_utils.c get_next_line.c

ALL: $(NAME) RUN
	
RUN:
	@clear && echo 1..$(words $(ZZ)) && ./$(NAME)

$(NAME): $(ZZ_SRC) $(PROG_SRC)
	cc -Werror -Wextra -Wall $^ -o $@

CLEAN:
	rm $(NAME)

PHONY: ALL CLEAN RUN
