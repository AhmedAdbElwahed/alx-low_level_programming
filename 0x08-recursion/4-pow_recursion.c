#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 * @x: the base number.
 * @y: the exponent number.
 * Return: the power of the base raised to the exponent.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (_pow_recursion(x, y - 1) * x);
}
