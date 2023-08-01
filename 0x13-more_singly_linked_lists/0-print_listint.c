#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list_t list.
 * @h: the list to be traversed.
 * Return: the size of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
