#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - Recursively checks if a substring is a palindrome.
 * @start: Pointer to the start of the substring.
 * @end: Pointer to the end of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *start, char *end)
{
	/* Base case: If the substring has 0 or 1 character, it's a palindrome */
	if (start >= end)
		return (1);
	/* Check if the first and last characters are equal */
	if (*start != *end)
		return (0); /* Not a palindrome */
	/* Recursively check the substring between the first and last characters */
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The pointer to the string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	/* Call the helper function with appropriate pointers */
	return (is_palindrome_helper(s, s + strlen(s) - 1));
}
