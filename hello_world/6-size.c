#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long));
printf("Size of long long int: %zu byte(s)\n", sizeof(long));
printf("Size of float: %zu byte(s)\n", sizeof(float));

return (0);
}
