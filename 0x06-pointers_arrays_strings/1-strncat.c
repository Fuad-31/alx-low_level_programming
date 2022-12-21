#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0,
	int j = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		i++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > i)
		n = i;
	src = start;
	for (; j < n; j++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
