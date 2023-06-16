#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - determine whether n is positive or negative
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
return (0);
}
