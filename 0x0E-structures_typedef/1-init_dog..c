#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to a dog struct
 * @name: string represent the dog name.
 * @age: float represent the dog age.
 * @owner: string represent the dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
