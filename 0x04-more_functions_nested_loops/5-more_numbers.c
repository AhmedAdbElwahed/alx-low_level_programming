#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * befrom 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
