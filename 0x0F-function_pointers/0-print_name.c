#include "function_pointers.h"

/**
 * print_name - a function taking a pointer to anoter function
 * as an arguemnt.
 * @name: the pointer to te string holding the name
 * @f: the pointer ti the function.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
