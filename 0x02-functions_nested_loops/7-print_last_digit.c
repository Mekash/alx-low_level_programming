#include "main.h"
/**
  * print_last_digit - print last digit of a mumber
  * @n: last digit will be find
  * Return: The last digit
  */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + ('0'));
	return (n % 10);
}
