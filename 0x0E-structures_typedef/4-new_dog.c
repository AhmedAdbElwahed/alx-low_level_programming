#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get the string length.
 * @str: string.
 * Return: string's length.
 */
int _strlen(const char *str)
{
int len;

for (len = 0; str[len] != '\0'; len++)
;
return (len);
}

/**
 *  _strcpy - copy string src into string dest.
 * @dest: the target string to be copied into.
 * @src: the string to be copied.
 * Return: a pointer to copied string.
 */
char *_strcpy(char *dest, const char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: string represent the dog name.
 * @age: float represent the dog age.
 * @owner: string represent the dog owner.
 * Return: a pointer to the new created struct of type dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || !owner)
{
return (NULL);
}

dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);

return (dog);
}
