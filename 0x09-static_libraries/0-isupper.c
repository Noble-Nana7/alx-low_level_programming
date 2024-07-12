#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if parameter represents an uppercase letter.
 * @c: integer representing character
 * Return: 0 (Always)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
