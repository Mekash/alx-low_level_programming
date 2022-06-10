#include "main.h"
/**
  * _islower return whether the alphabet is lowercase or not
  *
  * Return: 1 if the alphabe is 1 or 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
