#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int.
 * @c: character.
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *p = NULL;
unsigned int i;

if (size == 0)
{
return (NULL);
}
p = malloc(sizeof(c) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}

return (p);
}
