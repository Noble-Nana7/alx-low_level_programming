#include "main.h"

/**
 * _isalpha - checks for alphabet characters.
 *
 * @c: character being checked
 *
 * Return: 0 (Always)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
