#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a
 * new node at the end of a list_t list.
 * @head: a pointer points at a pointer
 * that points to first element in the list.
 * @str: the string value that node can hold.
 * Return: the new created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *node = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(newNode->str);
	}
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
