#include <stdio.h>
#include "dog.h"
/**
 * print_dog - entry code
 * @d: new structure name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age <= 0)
		{
			printf("nil");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

