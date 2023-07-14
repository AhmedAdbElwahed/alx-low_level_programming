#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the size of the chunk of memory.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
else
{
return (p);
}
}
