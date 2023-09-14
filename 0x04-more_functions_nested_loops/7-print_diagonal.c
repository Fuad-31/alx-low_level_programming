#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input parameter
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i == (n - 1))
			{
				continue;
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}


