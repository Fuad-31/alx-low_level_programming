#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	while (*haystack != '\0')
	{
		char *substr = needle;
		char *base_address = haystack;

		while (*haystack != '\0' && *substr != '\0' && *substr == *haystack)
		{
			substr++;
			haystack++;
		}
		if (*substr == '\0')
			return (base_address);
		haystack = base_address + 1;
	}
	return (0);
}
