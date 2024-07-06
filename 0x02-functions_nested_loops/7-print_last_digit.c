#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: the int that we extract last digit from
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
