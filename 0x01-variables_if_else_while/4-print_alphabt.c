#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase except e and q
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch = 97;
while (ch != 123)
{
if (ch == 101)
{
ch++;
continue;
}
if (ch == 113)
{
ch++;
continue;
}

putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
