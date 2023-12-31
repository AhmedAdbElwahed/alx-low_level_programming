#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * 
 * @n: is the binary number to be printed  
 */
void print_binary(unsigned long int n)
{
    int bit = sizeof(n) * 8, isPrinted = 0;

    while (bit)
    {
        if (n & 1L << --bit)
        {
            _putchar('1');
            isPrinted++;
        }
        else if (isPrinted)
        {
            _putchar('0');
        }
    }
    if (!isPrinted)
    {
        _putchar('0');
    }
}

