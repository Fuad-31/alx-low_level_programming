#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - does my stuff
 * @n: n is the input
 *
 * Desc: 'The prog prints is -ve if n > 0, is -ve if < 0 and is zero if = 0'
 * Return: Always 0
 */

int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
