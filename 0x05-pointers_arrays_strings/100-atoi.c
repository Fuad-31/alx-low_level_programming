#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int total = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			i *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			total = total * 10 + *s - '0';
		}

		else if (null)
			break;
		s++;
	}

	if (i < 0)
		total = (-total);

	return (total);
}
