#include "main.h"

/**
 * _abs - returns absolute value of an integer
 *
 * @n: integer that we need absolute value of
 *
 * Return: Void
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
