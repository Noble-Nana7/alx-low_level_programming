#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this code prints to the stdout
 * all the possible different combinations
 * of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			putchar(i + '0');
			putchar(i + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
