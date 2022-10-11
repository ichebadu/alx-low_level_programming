#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - this initializes the variable type struct dog.
 * @d: the dog to be initialized.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void int_dog(struct dog *d char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
