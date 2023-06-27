#include "main.h"

int my_strlen(char *s);
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the string to be reversed.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = my_strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
/**
 * my_strlen - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int my_strlen(char *s)
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

