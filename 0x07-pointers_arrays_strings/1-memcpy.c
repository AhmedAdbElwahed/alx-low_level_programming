#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: the destination memory area.
 * @src: the source memory area.
 * @n: n bytes from memory area.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
