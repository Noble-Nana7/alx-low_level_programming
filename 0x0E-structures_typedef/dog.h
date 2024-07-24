#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A struct that takes three data types
 * @name: a char data type pointer that pointes to a string.
 * @age: a float data type
 * @owner: a pointer that points to a string.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */

typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Name to set for the dog.
 * @age: Age to set for the dog.
 * @owner: Owner to set for the dog.
 *
 * Description:
 * This function initializes a struct dog variable with the provided name, age,
 * and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
