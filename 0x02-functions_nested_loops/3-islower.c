#include "main.h"
/**
  * _islower a function check lowercase alphabet of english
  * Return: if 1 the alphabet is lowercase
  * Return: if 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z' )
		return (1);
	else
		return (0);
}
