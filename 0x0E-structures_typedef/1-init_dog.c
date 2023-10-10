#include "dog.h"

/**
 * init_dog - initial structure of type dog
 *
 * @d: structure pointer
 * @name: pointer to the dog's name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
