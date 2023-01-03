#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, d1, d2;

	k = 0;
	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? d1 += a[k] : 0;
			(i + j == size - 1) ? d2 += a[k] : 0;
			k++;
		}
	printf("%i, %i\n", d1, d2);
}
