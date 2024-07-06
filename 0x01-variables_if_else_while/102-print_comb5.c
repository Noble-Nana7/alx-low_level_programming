#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *     This program generates and prints all possible combinations
 *     of two two-digit numbers, separated by a comma and space.
 *
 *     The combinations are printed in ascending order.
 *
 * Return:
 *     Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');

			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');  /* Print a newline character at the end */

	return (0);
}
