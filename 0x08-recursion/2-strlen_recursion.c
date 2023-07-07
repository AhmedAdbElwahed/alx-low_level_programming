#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int _strlen_recursion(char *s)
{
int len;

len = 1;
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + len);
}
