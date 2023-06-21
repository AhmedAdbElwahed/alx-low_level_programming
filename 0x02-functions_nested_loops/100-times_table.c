#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: the limit of the tabel.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <=; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');
			if (result <= 9)
				_putchar(' ');
			else if (result <= 99)
				_putchar(' ');
			if (result >= 100)
			{
				_putchar((result / 100) + 48);
				_putchar((result / 10) % 10 + 48);
			}
			else if (result <= 99 && result >= 10)
			{
				_putchar((result % 10) + 48);
			}
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
