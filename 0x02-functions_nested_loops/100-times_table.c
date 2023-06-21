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

	for (i = 0; i < n + 1; i++)
	{
		_putchar('0');
		for (j = 1; j < n + 1; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
