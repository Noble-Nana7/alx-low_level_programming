#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];

	/* Seed the random number generator with the current time */
	srand((unsigned int)time(NULL));

	/* Generate a random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		/* Generate a random character from ASCII values 33 to 126 */
		password[i] = rand() % 94 + 33;
	}

	/* Null-terminate the password */
	password[PASSWORD_LENGTH] = '\0';

	/* Print the generated password */
	printf("Generated password: %s\n", password);

	return 0;
}

