#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum value of the created array.
 * @max: the maximum value of the created array.
 * Return: a pointer to an array of integer initialized from min to max;
 */
int *array_range(int min, int max)
{

int *p;
int i;

if (max < min)
{
return (NULL);
}

p = malloc(((max - min) + 1) * sizeof(int));
if (p == NULL)
{
return (NULL);
}

for (i = 0; i <= ((max - min) + 1); i++)
{
p[i] = i + min;
}
return (p);
}
