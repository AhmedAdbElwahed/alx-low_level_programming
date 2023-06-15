#include <stdio.h>
#include <unistd.h>
/**
 * main - prints string using sterr
 * Return: 1 if the program fail. 0 if the program success
*/
int main(void)
{
char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, buf, sizeof(buf));
return (1);
}
