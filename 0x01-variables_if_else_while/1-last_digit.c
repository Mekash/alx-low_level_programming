#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Print last digit of the stored variable with some conditions
 * and
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	if (lastD > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	if (lastD == 0)
		printf("Last digit of %d is %d and is equal to 0\n", n, lastD);
	else if (lastD < 6 && lastD != 0)
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	return (0);
}
