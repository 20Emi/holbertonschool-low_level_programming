File Edit Options Buffers Tools C Help
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
printf("size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long));
printf("Size of long long int: %zu bytes\n", sizeof(long));
printf("Size of float: %zu bytes\n", sizeof(float));

return (0);
}
