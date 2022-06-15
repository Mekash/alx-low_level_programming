#include <stdio.h>
/**
 * main - compute the sum of multiles of
 * 3 and 5 less than 1024
 *Return: Nothing
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	printf("%d\n", result);
	return (0);
}
