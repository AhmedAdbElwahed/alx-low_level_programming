#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase reversed, followed by a new line
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch = 48;
while (ch < 58)
{
putchar(ch);
ch++;
}
ch = 97;
while (ch < 103)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
