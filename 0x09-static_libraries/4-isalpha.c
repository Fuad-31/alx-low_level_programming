#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: an input character
 * Return: 1 if it is a letter and 0 otherwise
 */

int _isalpha(int c)
{

	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				letter = 1;
		}
	}
	return (letter);
}

