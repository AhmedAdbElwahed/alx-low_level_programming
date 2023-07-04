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
 * _strstr - a function that locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to be found.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if ((haystack == NULL) || (needle == NULL))
{
return (NULL);
}
while (*haystack)
{
if (my_strchr(needle, *haystack))
{
return (haystack);
}
else
{
haystack++;
}
}
return (NULL);
}
