#include "main.h"

/**
 *  _islower -  checks for lowercase character c
 *
 *  Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	char i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			j = 1;
	}

	return (j);
}
