/**
 * main - Entry point
 *
 * Description: This program generates and prints all possible combinations
 *              of two two-digit numbers, separated by a comma and space. The combinations
 *              are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

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

    putchar('\n');
    return 0;
}

