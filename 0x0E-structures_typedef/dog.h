#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - release the dogs of war
 * @name: what do you call yourself?
 * @age: does age truly bring wisdom?
 * @owner: are you actually doing any of this for yourself?
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
#endif
