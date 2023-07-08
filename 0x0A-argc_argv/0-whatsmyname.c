#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: the arguments count;
 * @argv: a one dimensional array of arguments.
 * Return: 0 if success. 1 otherwise.
 */
int main(int argc, char **argv)
{
printf("%s\n", argv[argc -1]);
return (0);
}
