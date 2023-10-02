#ifndef FILE_IO
#define FILE_IO

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *f, size_t l);
int create_file(const char *f, char *tc);
int append_text_to_file(const char *f, char *tc);

#endif
