#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase reversed, followed by a new line
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch = 122;
while (ch != 96)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
