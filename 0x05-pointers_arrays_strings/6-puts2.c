#include "main.h"

int my_strlen3(char *s);
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string to be printed.
 */
void puts2(char *str)
{
	int i;
	int len = my_strlen3(str);

	if (str[0] != '\0')
	{
		for (i = 0; i < len - 1; i++)
		{
			if (str[i] % 2 == 0)
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}

/**
 * my_strlen3 - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int my_strlen3(char *s)
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
