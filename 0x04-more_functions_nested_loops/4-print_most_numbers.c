#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line
 *
 * Return: no retrurn
 */

void print_most_numbers(void)
{
	int j;

	j = 0;
	while (j <= 9)
	{
		if ((j >= 0 && j <= 1) || j == 3 || (j >= 5 && j <= 9))
		{
			_putchar(j + '0');
		}
		j++;
	}
	_putchar('\n');
}
