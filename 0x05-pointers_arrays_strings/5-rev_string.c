#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: No return
 */
void rev_string(char *s)
{
	int j = 0, i = 0;
	char aux;

	while (s[j] != '\0')
		j++;

	while (i < j--)
	{
		aux = s[i];
		s[i++] = s[j];
		s[j] = aux;
	}
}
