#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch = 97;
while (ch != 123)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
