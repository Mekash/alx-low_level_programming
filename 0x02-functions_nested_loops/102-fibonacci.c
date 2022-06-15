#include <stdio.h>
/**
 *main - print the first 50 fibonacci numbers.
 *Return: Nothing
 */
int main(void)
{
	unsigned long count, i, j, k;

	for (i = 0; i < 50; i++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%1u", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
		return (0);
}
