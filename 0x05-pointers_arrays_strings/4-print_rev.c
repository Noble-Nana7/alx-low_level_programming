#include "main.h"

/**
 * print_rev - Prints a string in reverse , followed by
 * a new line.
 * @s: Pointer to the string.
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
