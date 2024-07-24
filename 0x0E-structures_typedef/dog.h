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

#endif
