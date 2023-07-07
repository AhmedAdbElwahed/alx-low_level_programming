#include "main.h"

int is_root(int, int);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: input number.
 * Return: the square root of a given number.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (is_root(n, 0));
}
}

/**
 * is_root - get the root of a number.
 * @number: the root to be checked.
 * @root: the tested number.
 * Return: the root of a given number.
 */
int is_root(int number, int root)
{
if ((root * root) > number)
{
return (-1);
}
else if ((root * root) == number)
{
return (root);
}
else
{
return (is_root(number, root + 1));
}
}
