#include "main.h"
/**
  * print_last_digit - print last digit of a mumber
  * @nld: last digit will be find
  * Return: The last digit
  */
int print_last_digit(int nld)
{
	nld = 0;

	if (nld < 0)
	{
		nld = nld * -1;
	}
	_putchar((nld % 10) + '0');
	return (nld % 10);
}
