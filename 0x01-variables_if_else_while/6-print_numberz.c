#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the numbers from 0 to 9
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int num = 48;
while (num < 58)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
