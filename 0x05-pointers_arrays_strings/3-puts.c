#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: the string to be printed.
 */
void _puts(char *str)
{
	while (1)
	{
		_putchar(*str++);
		if (*str == '\0')
			break;
	}
	_putchar('\n');
}
