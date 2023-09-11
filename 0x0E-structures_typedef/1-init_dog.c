#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog to intit
 * @name: the name of dog
 * @age: the age of dog
 * @owner: owner of dog
 *
 * Return: nothing.
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
