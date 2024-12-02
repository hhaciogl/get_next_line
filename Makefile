NAME = run
CC = cc
CFLAGS = -Wextra -Werror -Wall
C_FILES = ../get_next_line.c ../get_next_line_utils.c main.c

all: $(NAME)

$(NAME): $(C_FILES)
	$(CC) -o $(NAME) $(CFLAGS) $(C_FILES)

clean:
	rm -f $(NAME)

re: clean $(NAME)

test:
	./$(NAME)

git:
	$(MAKE) norm
    @norm=$$?
    $(MAKE) test
    @test=$$?
    @if [ $$norm -eq 0 ] && [ $$test -eq 0 ]; then \
		git checkout master && git merge next \
    else \
        git reset --hard HEAD@{1} \
    fi

norm:
	norminette ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h

.PHONY: all clean norm re test git