#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit of the stored variable with some conditions
 * and
 * return 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if ( n > 5)
		printf("last digit of %d is %d greater than 5\n", n, lastD);
	if ( n == 0)
		printf("last digit of %d is %d equal to 0\n", n, lastD);
	if (n <  6 ){
		printf("last digit of %d is %d less than 6 and not 0\n", n, lastD)
	}while (lastD !== 0)
	return (0);
}
