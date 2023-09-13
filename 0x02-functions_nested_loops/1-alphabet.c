#include "main.h"

/**
 * main - prints alphabets from a to z
 *
 * Return: Always 0
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
