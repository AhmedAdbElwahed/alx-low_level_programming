#include "main.h"

void _print(int n);
/**
 * print_to_98 - prints all natural numbers from n to 98
 * , followed by a new line.
 * @n: the start number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_print(i);
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_print(i);
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}


}

/**
 * _print - prints integer number using putchar func
 * @n: integer number to be printed
 */
void _print(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_print(n / 10);

	_putchar(n % 10 + '0');
}
