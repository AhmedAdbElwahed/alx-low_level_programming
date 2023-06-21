#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to get its last digit.
 * Return: the last digit of number n.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = (_abs(n % 10)) + 48;
	_putchar(last_digit);
	return (last_digit - 48);
}
