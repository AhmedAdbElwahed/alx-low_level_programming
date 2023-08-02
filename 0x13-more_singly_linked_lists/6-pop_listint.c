#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head:  pointer points at a pointer
 * that points to first element in the list.
 * Return: the head node’s data (n). (0) if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		n = node->n;
	}

	*head = (*head)->next;

	return (n);
}
