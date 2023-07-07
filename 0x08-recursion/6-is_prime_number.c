#include "main.h"

int is_prime(int, int);
/**
 * is_prime_number - a function that returns
 * the natural square root of a number.
 * @n: the number to be checked.
 * Return: 1 if the number is prime. 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (is_prime(n, 2) == 1)
{
return (1);
}
return (0);
}

/**
 * is_prime - checks if the number is prime or not.
 * @number: the number to be checked.
 * @n: the number to be checked against.
 * Return: 1 if the number is prime. 0 other wise.
 */

int is_prime(int number, int n)
{
if (number == n)
{
return (1);
}

if ((number % n) == 0)
{
return (0);
}
return (is_prime(number, n + 1));
}
