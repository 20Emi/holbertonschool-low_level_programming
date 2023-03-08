#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int a, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
