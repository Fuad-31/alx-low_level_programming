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
		n = -1 * (x % 10);
	else
		n = x % 10;

	_putchar((n % 10) + '0');

	return (n % 10);

}
