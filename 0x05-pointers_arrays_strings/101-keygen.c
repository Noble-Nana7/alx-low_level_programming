#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int password_length = 10;
	char password[password_length + 1];
	
	// Seed the random number generator with the current time
	srand(time(0));
	
	// Generate a random password
	for (i = 0; i < password_length; i++)
	{
		// Generate a random character from ASCII values 33 to 126
		password[i] = rand() % 94 + 33;
	}
	
	// Null-terminate the password
	password[password_length] = '\0';
	
	// Print the generated password
	printf("Generated password: %s\n", password);

	return 0;
}
