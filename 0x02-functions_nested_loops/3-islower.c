#include "main.h"

/**
 * _islower - it returns 1 if value is small
 * letter and 0 if otherwise
 * @c: input variable
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{	
		return (1);
	}
	return (0);
}
