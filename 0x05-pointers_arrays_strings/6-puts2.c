#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void puts2(char *str)

{
	int arr = 0, i = 0;

	while (str[arr] != '\0')
			arr++;
			arr -= 1;
	for (; i <= arr; i += 2)
			_putchar(str[i]);
	_putchar('\n');
}
