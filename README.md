# get-next-line
## requirments
    -[ ] Repeated get_next_line() should let you read the text file, one line at a time.
    -[ ] Your function should return the line that was read.
    -[ ] If there is nothing else to read it should return NULL.
    -[ ] if an error occurred it should return NULL
    -[ ] Should work when reading from a text file
    -[ ] Should work when reading from the standard input
    -[ ] Returned line should include the terminating \\n character
    -[ ] No need \\n if end of file was reached
    -[ ] get_next_line.h must at least contain the prototype of the get_next_line()
    -[ ] Add all the helper functions you need in the get_next_line_utils.c file.
    -[ ] You have to read files in get_next_line(), add this option to your compiler call: -D BUFFER_SIZE=n
    -[ ] It will define the buffer size for read()
    -[ ] The buffer size value will be modified in order to test your code.
    -[ ] Also define a default for your buffer size in case no BUFFER_SIZE given
    -[ ] cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
    -[ ] Undefined behavior if the file pointed to by the file descriptor changed since the last call whereas read() didn’t reach the end of file.
    -[ ] Undefined behavior when reading a binary file. However, you can implement a logical way to handle this behavior ifyou want to.
## search
    -[ ] file
    -[ ] file-line
    -[ ] file-type
    -[ ] efficency-searching
    -[ ] efficency-searching-measurments
    -[ ] efficency-allocating
    -[ ] efficency-allocating-
    -[ ] macros
    -[ ] macros-initialize
    -[ ] macros-modify
    -[ ] fn-read
    -[ ] fn-read-buffer
    -[ ] static-var
    -[ ] buffer
    -[ ] helper-fn
    -[ ] include
    -[ ] cache
    -[ ] dynamic structures
    -[ ] streams
    -[ ] stdin-stdout-stderr
## tests
    -[ ] should read text files
    -[ ] should read stdin
    -[ ] shouldnt read binary
    -[ ] should return a newline if file has one
    -[ ] should use BUFFER_SIZE for read()
    -[ ] should return null if there is an error
    -[ ] should return null if there is nothing to read
    -[ ] should read 1k line
    -[ ] should read 2k line
    -[ ] should read 5mb line
    -[ ] should read 1GB line
    -[ ] should work with BUFFER_SIZE 1
    -[ ] should work with BUFFER_SIZE 2
    -[ ] should work with BUFFER_SIZE 4
    -[ ] should work with BUFFER_SIZE 8
    -[ ] should work with BUFFER_SIZE 42
    -[ ] should work with BUFFER_SIZE 200
    -[ ] should work with BUFFER_SIZE 1000
    -[ ] should work with BUFFER_SIZE 5000
    -[ ] should work with BUFFER_SIZE 10000000


    /// /// /// /// ///\n
    /// /// /// /// ///\n
    /// /// /// /// ///\n
