#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: No return
 */
void puts_half(char *str)
{
	int j = 0, i, n;

	while (str[j] != '\0')
		j++;

	if (j % 2 == 0)
		n = j / 2;

	else
		n = (j + 1) / 2;

	for (i = n; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
