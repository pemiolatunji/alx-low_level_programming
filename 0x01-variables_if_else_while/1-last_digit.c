#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*  * main - entry point
*
*    * Return:always return 0
*
*/
int main(void)
{

	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	printf("Last digit of %d is", n);
	if ((n % 10) > 5)
		printf(" %d and is greater than 5\n", n % 10);
	else if ((n % 10) == 0)
		printf(" %d and is 0\n", n % 10);
	else if (((n % 10) < 6) && ((n % 10) != 0))
		printf(" %d and is less than 6 and not 0\n", n % 10);
	return (0);
}
