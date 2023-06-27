#include "main.h"

int my_strlen2(char *);
/**
 * puts_half - a function that prints the second half of a string,
 * followed by a new line.
 * @str: the string to be printed.
 */
void puts_half(char *str)
{
	int n;
	int i;
	int len = my_strlen2(str);

	n = (len - 1) / 2;
	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}

/**
 * my_strlen2 - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int my_strlen2(char *s)
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

