#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the area to be filled
 * @b: the constant byte b.
 * @n: the first n bytes of the memory area.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
