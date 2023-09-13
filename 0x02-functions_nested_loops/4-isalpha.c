#include "main.h"

/**
 * _isalpha - checks if it is character
 * @c: an input character
 *
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c >= 'Z')
		return (1);
	return (0);
}
