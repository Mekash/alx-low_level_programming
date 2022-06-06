#include <stdio.h>

/**
 * main-prints the alphabet in lowercase, and then in uppercase
 *
 * return Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}

	putchar('\n');

	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}

	return (0);
}
