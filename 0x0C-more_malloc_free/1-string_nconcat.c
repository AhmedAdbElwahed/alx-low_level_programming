#include "main.h"

/**
 * _strlen - get the length of a string.
 * @str: a string.
 * Return: the string of a given string.
 */
int _strlen(const char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: the number of bytes to be concatenated
 * Return: a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1;
int len2;
char *p;
int i;

if (s1 == NULL)
{
*s1 = '\0';
}
if (s2 == NULL)
{
*s2 = '\0';
}
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n >= len2)
{
n = len2;
}
p = malloc((len1 + n) *sizeof(char) + 1);

if (p == NULL)
{
return (NULL);
}

for (i = 0; i <= len1 + n; i++)
{
if (i < len1)
{
p[i] = s1[i];
}
else
{
p[i] = s2[i - len1];
}
}
p[i] = '\0';
return (p);
}
