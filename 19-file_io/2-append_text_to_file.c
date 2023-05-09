#include "main.h"
/**
 *append_text_to_file -  function that appends text at the end of a file.
 *@filename: file name
 *@text_content: is a NULL terminated string to write to the file
 *
 *Return: 1 or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd1;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_RDWR | O_APPEND);
	if (fd1 == -1)
		return (-1);

	if (text_content != NULL)
		write(fd1, text_content, strlen(text_content));

	close(fd1);

	return (1);
}
