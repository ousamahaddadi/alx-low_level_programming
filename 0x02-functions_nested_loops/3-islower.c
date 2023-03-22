#include "main.h"

/**
 * _islower - prints 1 if @c lowercase,
 * otherwise prints 0 if c uppercase
 * @c: is the character
 * Return: 1 if c lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

