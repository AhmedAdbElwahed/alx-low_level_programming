#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: the arguments count;
 * @argv: a one dimensional array of arguments.
 * Return: 0 if success. 1 otherwise.
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
