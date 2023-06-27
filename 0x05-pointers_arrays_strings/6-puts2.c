#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string to be printed.
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (1)
	{
		if (index % 2 == 0)
			_putchar(*str);
		if (*str == '\0')
			break;
		*str++;
		index++;
	}
	_putchar('\n');
}
