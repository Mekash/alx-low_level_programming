#include "main.h"
/**
 * jack_bauer - print every minute of a day
 * h = hour, m = minutes
 * / 10 allow second dgit to rotate
 * fot llop breaks before passing 24:00
 * Return: 24 hours line by line
 */ 
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
