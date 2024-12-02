NAME = run
CC = cc
CFLAGS = -Wextra -Werror -Wall
C_FILES = get_next_line.c get_next_line_utils.c test/main.c

all: norm $(NAME) test

$(NAME): $(C_FILES)
	$(CC) -o $(NAME) $(CFLAGS) $(C_FILES)

clean:
	rm -f $(NAME)

re: clean $(NAME)

test:
	./$(NAME)

abort:
	git reset --hard HEAD@{1}

merge:
	git checkout master && git merge next

norm:
	norminette get_next_line.c get_next_line_utils.c get_next_line.h

.PHONY: all clean norm re test git