#include "main.h"
/**
 * main - prints the string _putchar to stdout
 * Return: 0 on success. 1 on fail
 */
int main(void)
{
	char name[] = "_putchar";

	for (int i = 0; i < sizeof(name); i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
