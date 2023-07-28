#include "lists.h"

/**
 * list_len - get the length of linked list.
 * @h: a pointer that points to first element in the list.
 * Return: the length of the list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
