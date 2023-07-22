#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array to be searched in.
 * @size: the size of the array.
 * @cmp: a pointer to a function that make the comparison.
 * Return: the index of the element if found, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
	return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

