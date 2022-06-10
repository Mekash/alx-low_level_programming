#include "main.h"
/**
  * _isalpha - test the letter is alphabet
  * @c: test the alphabet(lowercase and uppercase), 
  * Return: 1 if the letter alphhabet()
  * Lowercase or upper case), or 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
