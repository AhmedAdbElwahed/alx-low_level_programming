#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: This is the number of elements to be allocated.
 * @size: This is the size of elements.
 * Return: a pointer to the allocated memory, or NULL if the request fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
unsigned int i;

p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
p[i] = 0;
}
return ((void *) p);
}
