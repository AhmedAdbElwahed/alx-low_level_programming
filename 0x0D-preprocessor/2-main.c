#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: 0 on success. 1 otherwise.
 */
int main(void)
{
printf("%s\n", __FILE_NAME__);
return (0);
}
