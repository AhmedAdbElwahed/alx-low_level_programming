#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the range of a accepted chars.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;

if ((s == NULL) || (accept == NULL))
{
return (len);
}

while (*s && _strchr(accept, *s++))
{
len++;
}
return (len);
}
