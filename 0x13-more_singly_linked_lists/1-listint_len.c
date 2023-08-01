#include "lists.h"

/**
 * listint_len - get the length of linked list.
 * @h: a pointer that points to first element in the list.
 * Return: the length of the list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
