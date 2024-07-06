#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a newline
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}

	_putchar('\n');
}
