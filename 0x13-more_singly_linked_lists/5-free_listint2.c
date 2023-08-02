#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Write a function that frees a listint_t list.
 *@head:  pointer points at a pointer
 * that points to first element in the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *node = (*head)->next;
	listint_t *tmp;

	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
