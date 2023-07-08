#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: the arguments count;
 * @argv: a one dimensional array of arguments.
 * Return: 0 if success. 1 otherwise.
 */
int main(int argc, char **argv)
{
int i;
int result = 1;

if (argc > 2)
{
for (i = 1; i < argc; i++)
{
result *= strtol(argv[i], NULL, 10);
}

printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
