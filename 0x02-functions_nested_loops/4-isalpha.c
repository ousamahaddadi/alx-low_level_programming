#include "main.h"

/**
 * _isalpha- test if the character c is alpha
 * @c: is a character
 * Return: 1 if c aplha , 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

