#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry code
 * @name: string
 * @age: float
 * @owner: string
 *Return: ret
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
	{
		return (NULL);
	}
	ret->name = name;
	ret->age = age;
	ret->owner = owner;
	return (ret);
}
