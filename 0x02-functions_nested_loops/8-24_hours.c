#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * , starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (h1 < 3)
	{
		while (h2 < 10)
		{
			if (h1 == 2 && h2 == 4)
				break;
			while (m1 < 6)
			{
				while (m2 < 10)
				{
					_putchar(h1 + 48);
					_putchar(h2 + 48);
					_putchar(':');
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar('\n');
					m2++;
				}
				m2 = 0;
				m1++;
			}
			m1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}
}
