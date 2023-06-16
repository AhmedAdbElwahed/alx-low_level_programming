#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - get the last digit of var n and prints it with some conditions
 * Return: 1 if the program fails. 0 if the program successes
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d\n", n);
int lastDigit;
lastDigit = n % 10;

if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0", n, lastDigit);
else
printf("Last digit of %d is %d and is less than 6 and not 0",
n, lastDigit);
return (0);
}

