#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: the set of bytes.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int index = 1000000;

if ((s == NULL) || (accept == NULL))
{
return (NULL);
}


for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
{
if (index > j)
{
index = j;
}
}
}
}
return (s + index);
}
