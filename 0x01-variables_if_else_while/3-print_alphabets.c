#include <stdio.h>

/**
 * main-print Lowercase and in new line Uppercase
 *
 * return Always(Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}

	putchar('\n');

	for (c = 'A'; c <= 'z'; c++)
	{
	putchar(c);
	}

	return (0);
}
