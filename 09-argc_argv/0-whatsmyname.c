#include "stdio.h"

int
main(int argc, char *argv[])
{
	int vab;

	for (vab = 0; vab < argc; vab++)
	{
		printf("%s", argv[vab]);
	}
	printf("\n");
	return (0);
}
