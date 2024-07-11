#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: First string.
 * @s2: Second string with wildcard (*).
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they are identical */
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
		return 1;
	}

	/* If the current characters match or s2 has a wildcard */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Move to the next characters in both strings */
		return wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);
	}

	/* If the characters don't match and there is no wildcard */
	return 0;
}
