NAME = run
CC = cc
CFLAGS = -Wextra -Werror -Wall
C_FILES = ../get_next_line.c ../get_next_line_utils.c main.c

all: $(NAME)

$(NAME): $(C_FILES)
	CC -o $(NAME) $(CFLAGS) $(C_FILES)

clean:
	rm -f $(NAME)

re: clean $(NAME)

norm:
	norminette ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h

.PHONY: all clean norm re