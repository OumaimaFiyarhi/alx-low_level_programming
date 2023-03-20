#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - entry code
 *@s: string to know its length
 * Return: number of byte in the string without \0.
 */
int _strlen(char *s)
{	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * dupstr - duplicates a string
 * @str: the string to be duplicated
 * Return: a copy of the str
 */
char *dupstr(char *str)
{
	char *t;
	int i, a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = _strlen(str) + 1;
	t = malloc(sizeof(char) * a);
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
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
	ret->name = dupstr(name);
	if (ret->name == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->age = age;
	ret->owner = dupstr(owner);
	if (ret->owner == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	return (ret);
}
