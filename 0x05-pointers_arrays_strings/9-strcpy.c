#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the destination string.
 * @src: the source string.
 * Return: the destination string pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		dest[i] = *src;
		if (*src == '\0')
			break;
		*src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
