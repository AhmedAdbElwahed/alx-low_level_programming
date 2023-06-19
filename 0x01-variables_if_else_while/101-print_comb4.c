#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all possible combinations of three digits
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int u = 2;
int t = 1;
int h = 0;
while ((h <= 7) || (t <= 8) || (u <= 9))
{
putchar(h + 48);
putchar(t + 48);
putchar(u + 48);
if (h != 7 || t != 8 || u != 9)
{
putchar(',');
putchar(' ');
}
if (u != 9)
++u;
else
{
if (t != 8)
{
++t;
u = t + 1;   /* due to given constraint, u will always greater than t */
}
else
{
++h;
t = h + 1;   /* due to given constraint, t will always greater than h */
u = t + 1;   /* due to given constraint, u will always greater than t */
}
}
}
putchar('\n');
return (0);
}
