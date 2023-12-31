#ifndef STRUCTURES_DOG_H
#define STRUCTURES_DOG_H

typedef struct dog dog_t;
/**
 * struct dog - a struct that represent a dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner of the dog.
 * Description: a representation of a real world dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
