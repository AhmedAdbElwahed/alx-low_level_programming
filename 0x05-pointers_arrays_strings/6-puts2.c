#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string to be printed.
 */
void puts2(char *str)
{
	int i;

	if (str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; ++i)
		{
			if (str[i] % 2 == 0)
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}
