check_files = \
			checks/check_ifiles.c \
			checks/main.c

program_files = \
			get_next_line.c \
			get_next_line_utils.c \
			get_next_line.h

run: gnl
	./gnl

gnl: $(check_files) $(program_files)
	cc -Wall -Wextra -Werror -o $@ $<

clean:
	rm gnl

.PHONY: clean