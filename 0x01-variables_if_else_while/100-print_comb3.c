#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all the cominations of two digits
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int ch1 = 48;
int ch2 = 49;
int count = 1;
while (ch1 < 58)
{

while (ch2 < 58)
{
putchar(ch1);
putchar(ch2);
if (ch1 != 56)
{
putchar(',');
putchar(' ');
}
ch2++;
}
ch2 = 49;
ch2 += count;
count++;
ch1++;
}
putchar('\n');
return (0);
}
