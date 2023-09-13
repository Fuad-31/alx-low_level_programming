#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @int: integer to print it abs
 *
 * Return: returns j or -j or 0
 */

int _abs(int j)
{
	if (j > 0)
		return (j);
	else if (j < 0)
		return (-j);
	else
		return (0);
}
