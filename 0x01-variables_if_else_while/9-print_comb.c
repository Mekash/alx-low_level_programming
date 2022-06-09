#include <stdio.h>

/**
 *main - Prints a serie of numbers with commas using fot-loop and putchar
 *
 *Return: Always (Success)
 */
int main(void)
{
	int c;

	for(c = '0'; c <= '9'; c++)
	{
		puthar(c);
	
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}	
	
	}
	
	putchar('\n');

	Return (0);

}

