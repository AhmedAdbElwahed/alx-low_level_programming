#include "main.h"
/**
 * main - prints the string _putchar to stdout
 * Return: 0 on success. 1 on fail
 */
int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
