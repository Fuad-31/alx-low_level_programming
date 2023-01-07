#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

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
