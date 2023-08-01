#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a
 * new node at the end of a list_t list.
 * @head: a pointer points at a pointer
 * that points to first element in the list.
 * @n: the int value that node can hold.
 * Return: the new created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *node = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (node)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	return (newNode);
}
