#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code printsall possible combinations of
 * single-digit numbers. each spe by a space and a comma.
 * prints to stdout
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
		if (i < end)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
