#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - operator
 * @argc: argument counting
 * @argv: argument variable
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int); /*puntero de una funcion 'f'*/
	int num1, num2, resultado;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
	/*cuenta que hace las operaciones*/
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[1][0] == '0') ||
			(argv[2][0] == '/' && argv[3][0] == '0') ||
			(argv[2][0] == '%' && argv[1][0] == '0') ||
			(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*cuenta que hace las operaciones*/
	f = get_op_func(argv[2]);
	resultado = f(num1, num2);

	printf("%d\n", resultado);

	return (0);
}

