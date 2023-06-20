#include "main.h"
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

