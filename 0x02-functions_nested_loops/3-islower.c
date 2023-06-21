#include "main.h"
/**
 * _islower - checks if c is lowercase or not
 * @c: the int to be checked
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c > 91)
		return (1);
	return (0);
}
