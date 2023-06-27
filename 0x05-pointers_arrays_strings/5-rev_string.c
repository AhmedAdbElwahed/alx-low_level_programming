#include "main.h"

int my_strlen1(char *s);
/**
 * rev_string -  a function that reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{

	int i, len, temp;

	len = my_strlen1(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}


/**
 * my_strlen1 - a function that returns the length of a string.
 * @s: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int my_strlen1(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1;
	while (1)
	{
		*s++;
		if (*s == '\0')
			break;
		len++;
	}
	return (len);
}
