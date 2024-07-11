#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings reach the end */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* If s2 contains '*' */
	if (*s2 == '*')
	{
		/* Move to the next character in s2 or consider '*' matching empty string */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/* If characters match, move to the next character in both strings */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If characters do not match */
	return (0);
}
