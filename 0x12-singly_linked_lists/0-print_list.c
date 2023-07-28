#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the list to be traversed.
 * Return: the size of the linked list.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nail)" : h->str);
		count++;
		h = h->next;
	}
	return (count);
}
