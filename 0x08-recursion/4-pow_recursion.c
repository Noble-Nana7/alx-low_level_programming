#include "main.h"

/**
 * _pow_recursion - Calculates the power of x as
 * y as the exponent.
 * @x: The base.
 * @y: The exponent.
 * Return: 0 when Success and -1 when Error.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
