#include <stdio.h>

int
main(int argc, char *argv[])
{
	int we;

	if (argc > 0)
	{
	for (we = 0; we < argc; we++)
	{
		printf("%s\n", (argv[we]));
	}
	}
	return (0);
}
