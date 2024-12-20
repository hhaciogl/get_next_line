check_files = \
			checks/check_ifiles.c \
			checks/main.c

program_files = \
			get_next_line.c \
			get_next_line_utils.c

run: ok
	./ok

ok: $(check_files) $(program_files)
	cc -Wall -Wextra -Werror -o $@ $^

clean:
	rm ok

.PHONY: clean run