#include "main.h"
/**
 *main - program that copies the content of a file to another file.
 *@argc:number of arguments passed to the program
 *@argv: pointer array, contains the individual arguments
 *@file_form: original file
 *@file_to: copy file
 *@lei: read
 * Return: 0
 */
int main(int argc, char *argv[])
{
	ssize_t file_form, file_to, lei, wri;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_form = open(argv[1], O_RDONLY); /*Abrir el archivo en modo lectura*/
	if (file_form == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((lei = read(file_form, buffer, 1024)))
	{
		if (lei == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wri = write(file_to, buffer, lei);
		if (wri == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_form) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
