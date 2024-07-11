#include "main.h"

/**
 * _puts_recursion - a function to recursively print a string
 * followed by a new line
 * @s: a char that points to a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/*The base case - to check for the null terminator*/
		_putchar('\n');
		return; /*this return holds no value because the function has a void rt*/
	}

	/*now i print the current char from the recursion*/
	_putchar(*s);

	/*caalling the func again to ptc the rest of the string*/
	_puts_recursion(s + 1);
}
