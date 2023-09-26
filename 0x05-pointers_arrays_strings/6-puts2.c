#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0')
		j++;

	j -= 1;

	for (; i <= j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
