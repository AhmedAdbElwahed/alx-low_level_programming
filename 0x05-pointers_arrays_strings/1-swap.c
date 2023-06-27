#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the 1st var to be swapped.
 * @b: the 2nd var to be swapped.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
