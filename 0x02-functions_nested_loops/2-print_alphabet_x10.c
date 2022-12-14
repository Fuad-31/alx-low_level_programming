#include "main.h"

/**
 * print_alphabet_x10 - prints x10 the alphabet, in lowercase, then a new line
 */

void print_alphabet_x10(void)
{
	char t;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (t = 'a'; t <= 'z'; t++)
			_putchar(t);
		_putchar('\n');
	}
}
