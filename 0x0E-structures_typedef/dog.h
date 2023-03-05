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

/**
 * dog_t - new type of dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
