#include "main.h"
/**
 *create_file - function that creates a file.
 *@filename: file name
 *@text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd1;
	
	if (filename == NULL || text_content == 0)
		return (-1);

	fd1 = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
	if (fd1 == -1)
		return (-1);

	write(fd1, text_content, strlen(text_content));

	close(fd1);

	return (*text_content);
}
