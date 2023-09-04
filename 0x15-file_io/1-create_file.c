#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: a var that points at a string.
 * Return: 0 if str is empty. positive int (length of the str).
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}

	for (; str[i] != '\0'; i++)
		;
	return (i);

}

/**
 * create_file - a function that creates a file.
 * @filename: The name of the file to create
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		bytes = write(fd, text_content, len);
	}
	close(fd);
	return (bytes == len ? 1 : -1);
}
