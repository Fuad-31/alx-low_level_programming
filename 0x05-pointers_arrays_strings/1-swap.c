#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: always (0)
 */

void swap_int(int *a, int *b)

{
	int arr;

	arr = *a;
	*a = *b;
	*b = arr;
}
