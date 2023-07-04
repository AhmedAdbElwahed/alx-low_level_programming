#include "main.h"
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
if (_strchr(needle, *haystack))
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
