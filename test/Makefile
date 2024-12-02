NAME = run
CC = cc
CFLAGS = -Wextra -Werror -Wall
C_FILES = ../get_next_line.c ../get_next_line_utils.c main.c

all: $(NAME) test norm

$(NAME): $(C_FILES) get_next_line.h test.h
	$(CC) -o $(NAME) $(CFLAGS) $(C_FILES)

clean:
	rm -f $(NAME)

re: clean $(NAME)

test:
	./$(NAME)

norm:
	norminette ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h

.PHONY: all clean norm re test