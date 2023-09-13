#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets from a to z x10
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int c;
	int alpha;

	for (c = 0; c <= 9; c++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
