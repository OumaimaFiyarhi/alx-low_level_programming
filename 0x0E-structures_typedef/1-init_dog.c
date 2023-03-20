#include "dog.h"
/**
 * init_dog - Short description
 * @d: new structure name
 * @name: string
 * @age: float
 * @owner: string
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
