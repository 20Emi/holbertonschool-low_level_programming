#include "main.h"
/**
 *
 *
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
