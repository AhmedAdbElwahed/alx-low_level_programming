#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: is the number to be checked
 * Return: 1 if the number is positive.
 *		-1 if the number is negative.
 *		0 if the number is equal to zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
