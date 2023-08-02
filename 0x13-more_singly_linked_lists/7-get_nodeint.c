#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: a pointer that points to first element in the list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a listint_t linked list if found. (NULL) otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (head != NULL)
	{
		node = head;
	}

	return (node);
}
