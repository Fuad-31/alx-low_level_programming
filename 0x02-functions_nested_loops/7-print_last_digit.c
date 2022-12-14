#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @x: An integer input
 * Return: last digit of number x
 */

int print_last_digit(int x)
{
	int i;

	if (x < 0)
		i = -1 * (x % 10);
	else
		i = x % 10;

	_putchar((i % 10) + '0');

	return (i % 10);

}
