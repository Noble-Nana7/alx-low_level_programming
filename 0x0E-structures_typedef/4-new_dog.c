#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name to set for the new dog.
 * @age: Age to set for the new dog.
 * @owner: Owner to set for the new dog.
 *
 * Return: Pointer to the new dog_t structure, or NULL if the function fails.
 *
 * Description:
 * This function creates a new dog_t structure and initializes it with the
 * provided name, age, and owner. It stores a copy of the name and owner.
 * If the function fails, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	/* Allocate memory for the new dog_t structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name copy */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Allocate memory for the owner copy */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner to the allocated memory */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Initialize the new dog_t structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
