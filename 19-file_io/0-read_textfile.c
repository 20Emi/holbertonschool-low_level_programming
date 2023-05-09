#include "main.h"
/**
 *read_textfile - function that reads a text file and prints
 *@filename: file name
 *@letters: letters is the number of letters it should read and print
 *
 *Return: out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd1, fd2;
	ssize_t out;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);

	fd1 = open(filename, O_RDWR);
	if (fd1 == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	fd2 = read(fd1, buff, letters);

	out = write(STDOUT_FILENO, buff, fd2);

	close(fd1);

	return (out);
}
