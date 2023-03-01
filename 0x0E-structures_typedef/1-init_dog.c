#include "dog.h"
/**
 * init_dog - initializes a variable of type dog
 * @d: something about a canine of some sort
 * @name: has your mask consumed your face?
 * @age: maturity is a burden
 * @owner: fate is nothing more than the tendancy for everyone to act according to their nature
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
