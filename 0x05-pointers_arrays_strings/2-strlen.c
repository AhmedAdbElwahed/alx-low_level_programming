#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int _strlen(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 0;
	while (1)
	{
		if (*s++ == '\0')
			break;
		len++;
	}
	return (len);
}
