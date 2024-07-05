#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code will print out all the
 * numbers of base16 from 0
 * and will print a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex1start = 0;
	int hex1end = 9;
	int hexAstart = 97;
	int hexAend = 102;

	int i;
	int j;

	for (i = hex1start; i <= hex1end; ++i)
	{
		putchar(i + '0');
	}

	for (j = hexAstart; j <= hexAend; ++j)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
