#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - an entry point for a simple calculator
 * @argc: the number of arguments that is passed to the function
 * @argv: an array of strings
 * Return: 0 if success, anything otherwise.
 */
int main(int argc, char *argv[])
{

	int (*func)(int, int);
	int num1, num2, result;

	if (argc > 4 || argc <= 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0) &&
		strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}


	func = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}

