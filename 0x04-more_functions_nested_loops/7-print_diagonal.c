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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j <= i - 1; j++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}
	}
}
