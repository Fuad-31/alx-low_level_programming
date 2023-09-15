#include "main.h"

/**
 * print_square - function that prints a square,
 * followed by a new line.
 *
 * @size: size of the square
 * Return: no return
 */

void print_square(int size)
{
	int j;
	int i;

	if (size <= 0)
	{
		_putchar(' ');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');				
			}
			_putchar('\n');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
