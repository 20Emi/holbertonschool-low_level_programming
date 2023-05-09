#ifndef _main_h
#define _main_h

#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

	/*Task 0*/
ssize_t read_textfile(const char *filename, size_t letters);
	/*Task 1*/
int create_file(const char *filename, char *text_content);
	/*Task 2*/
int append_text_to_file(const char *filename, char *text_content);
	/*Task 3*/
	/*puchar*/
int _putchar(char c);

#endif
