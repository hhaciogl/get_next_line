C_FILES = t/main.c get_next_line_utils.c get_next_line.c

all: norm test clean merge_with_master

test: run
	./run

norm:
	norminette get_next_line.h get_next_line.c get_next_line_utils.c

run: $(C_FILES) get_next_line.h
	cc -Wall -Wextra -Werror $(C_FILES) -o run

clean:
	rm run get_next_line.c get_next_line.h get_next_line_utils.c

merge_with_master:
	@git push home develop
	@git checkout master
	@git merge feature
	@git push school master
	@git push home master

.PHONY: test all clean norm merge_with_master