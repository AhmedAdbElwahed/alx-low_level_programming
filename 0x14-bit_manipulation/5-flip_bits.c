#include "main.h"

/**
 * flip_bits - a function that returns the number of bits 
 * you would need to flip to get from one number to another. 
 * 
 * @m: the number to be filped. 
 * @n: the number to be filpped. 
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xorValue = n ^ m;
    unsigned int counter = 0;

    while (xorValue)
    {
        if (xorValue & 1ul)
        {
            counter++;
        }
        xorValue = xorValue >> 1;
    }
    return (counter);
}

