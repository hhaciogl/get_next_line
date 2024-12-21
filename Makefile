check_files = \
			checks/check_error_return_null.c \
			checks/check_function_prototype.c \
			checks/check_if_source_files_exist.c \
			checks/check_buffer_size.c \
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