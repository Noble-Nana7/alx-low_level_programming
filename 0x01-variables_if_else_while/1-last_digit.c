#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code will prin out the last digits
 * of the n int and provide info based
 * on the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDigit;
	char word[] = "is less than";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and %s 6 and not 0\n", n, lastDigit, word);
	}
	return (0);
}
