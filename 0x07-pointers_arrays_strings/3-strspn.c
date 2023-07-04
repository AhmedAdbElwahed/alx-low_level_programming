#include "main.h"

/**
 * my_strchr - a function that locates a character in a string.
 * @s: the string to be searched.
 * @c: the char to be found.
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */
char *my_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}

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

while (*s && my_strchr(accept, *s++))
{
len++;
}
return (len);
}
