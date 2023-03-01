#include "dog.h"
/**
 * init_dog - initializes a variable of type dog
 * @d: something about a canine of some sort
 * @name: has your mask consumed your face?
 * @age: maturity is a burden
 * @owner: will i ever be free from myself?
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
