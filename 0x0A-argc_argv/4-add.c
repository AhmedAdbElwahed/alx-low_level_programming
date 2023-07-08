#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * @argc: the arguments count;
 * @argv: a one dimensional array of arguments.
 * Return: 0 if success. 1 otherwise.
 */
int main(int argc, char **argv)
{
int i;
int j;
int result = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);

}
}
result += strtol(argv[i], NULL, 10);
}

printf("%d\n", result);
}
else
{
printf("0\n");
}

return (0);
}
