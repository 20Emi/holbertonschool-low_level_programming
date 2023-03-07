#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int y;

	for (n = 0; dest[n] != '\0'; n++)
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[n] = src[y];
		n++;
	}
	return (dest);
}
