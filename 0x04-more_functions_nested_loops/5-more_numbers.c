#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers
 * , from 0 to 14, followed by a new line
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
