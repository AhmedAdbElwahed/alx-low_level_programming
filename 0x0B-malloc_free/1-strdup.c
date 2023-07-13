#include "main.h"
/**
 * _strdup - a function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string (a pointer of characters).
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *p = NULL;
int i;

if (str == NULL)
{
return (NULL);
}

p = malloc(sizeof(str));

for  (i = 0; str[i] != '\0'; i++)
{
p[i] = str[i];
}

p[i] = '\0';
return (p);
}
