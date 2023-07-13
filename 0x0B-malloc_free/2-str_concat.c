#include "main.h"

/**
* _strlen - get the length of a string.
* @str: string.
* Return: size of the string.
*/
int _strlen(char *str)
{
int len = 0;

for (; str[len] != '\0'; len++)
;
return (len);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: character pointer.
 * @s2: character pointer.
 * Return:  pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
int len1;
int len2;
int i;
char *p;

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
p = malloc((len1 + len2) *sizeof(char) + 1);
if (p == NULL)
{
return (NULL);
}

for (i = 0; i <= len1 + len2; i++)
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
