#include "main.h"

/**
 * print_alphabet - prints alphabets from a to z
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
