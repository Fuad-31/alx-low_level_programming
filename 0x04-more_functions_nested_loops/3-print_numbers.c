#include "main.h"

/**
 * print_numbers - funct that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: no return
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
