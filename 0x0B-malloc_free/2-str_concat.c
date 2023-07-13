#include "main.h"
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
char *p = NULL;
int i = 0;
int j;

if (s1 == NULL)
{
p = malloc(sizeof(s2));
}
else if (s2 == NULL)
{
p = malloc(sizeof(s1));
}
else if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else
{
p = malloc(sizeof(s1) + sizeof(s2));
}

if (s1 != NULL)
{
for (; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
}

if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++)
{
p[i] = s2[j];
i++;
}
p[i + 1] = '\0';
}

return (p);
}
