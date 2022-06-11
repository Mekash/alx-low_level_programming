#include "main.h"
/**
  * print_last_digit - print last digit of a mumber
  * @nld: last digit will be find
  * Return: The last digit
  */
int print_last_digit(int nld)
{

	if (nld < 0)
	{
		nld = nld * -1;
	}
	else if (nld > 0)
	{
		 nld = nld;
        }
        _putchar((nld % 10) + '0');
        return (nld % 10);
}





