#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: the arguments count;
 * @argv: a one dimensional array of arguments.
 * Return: 0 if success. 1 otherwise.
 */
int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
