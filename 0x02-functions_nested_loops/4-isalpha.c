#include "main.h"
/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: is the character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c > 60 && c < 123))
		return (1);
	return (0);
}
