#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /*YOUR CODE GOES THERE*/
if (n > 0)
	  printf("is positive");
else
	(n = 0)
printf("is zero");
if (n < 0)
	printf("is negative")
return (0);
}
