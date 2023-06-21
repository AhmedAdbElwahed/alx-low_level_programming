#include "main.h"

void print(int n);

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j < 10)
					_putchar(' ');

			}
		}
		_putchar('\n');
	}
}

/**
 * print - prints integer number using putchar func
 * @n: integer number to be printed
 */
void print(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}
