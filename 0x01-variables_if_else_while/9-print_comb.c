#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all combination of single digit
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch = 48;
while (ch < 58)
{
putchar(ch);
if (ch != 57)
{
putchar(',');
putchar(' ');
}
ch++;
}
putchar('\n');
return (0);
}
