#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0, j = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		i++;
		src++;
	}
	i++;
	if (n > i)
		n = i;
	src = start;
	for (; j < n; j++)
		*dest++ = *src++;
	return (temp);
}
