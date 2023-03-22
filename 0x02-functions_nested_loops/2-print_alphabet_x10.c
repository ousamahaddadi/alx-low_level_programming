#include "main.h"
/**
 * print_alphabet_x10- prints alphabets 10 times
 * return: void
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i < 123)
			_putchar(i++);
		_putchar('\n');
		i = 97;
		j++;
	}
}

