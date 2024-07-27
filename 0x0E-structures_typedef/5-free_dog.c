#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog.
 * @d: Pointer to the dog_t structure to free.
 *
 * Description:
 * This function frees the memory allocated for a dog_t structure, including
 * the memory allocated for the name and owner members.
 */
void free_dog(dog_t *d)
{
	/* Check if the pointer d is not NULL */
	if (d != NULL)
	{
		/* Free the memory allocated for the name */
		free(d->name);

		/* Free the memory allocated for the owner */
		free(d->owner);

		/* Free the memory allocated for the dog_t structure */
		free(d);
	}
}
