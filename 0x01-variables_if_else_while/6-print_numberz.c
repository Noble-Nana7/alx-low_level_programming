#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the following code prints all the single digits
 * of base 10 from 0 to the sdtout
 * using only putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 0;
	int end = 9;

	int i;

	for (i = start; i <= end; ++i)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
