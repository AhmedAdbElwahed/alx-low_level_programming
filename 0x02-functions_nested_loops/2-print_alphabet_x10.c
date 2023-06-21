#include "main.h"
/**
 *	print_alphabet_x10 - print print_alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
print_alphabet();
}
}

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch != ('z' + 1))
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
