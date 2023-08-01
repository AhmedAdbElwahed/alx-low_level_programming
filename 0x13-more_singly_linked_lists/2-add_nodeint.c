#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  function that adds a new node at
 * the beginning of a list_t list.
 * @head: a pointer points at a pointer
 * that points to first element in the list.
 * @n: the int value that node can hold.
 * Return: the new created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *newList;

	newList = malloc(sizeof(listint_t));
	if (newList == NULL)
	{
		return (NULL);
	}

	newList->n = n;

	newList->next = (struct list_s *) *head;
	*head = newList;


	return (newList);
}
