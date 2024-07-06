#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');  /* Print the tens digit */
			}
			_putchar(i % 10 + '0');  /* Print the units digit */
		}
		_putchar('\n');
	}
}

