#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  function that adds a new node at
 * the beginning of a list_t list.
 * @head: a pointer points at a pointer
 * that points to first element in the list.
 * @str: the string value that node can hold.
 * Return: the new created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *newList;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		newList->str = strdup(str);
		if (!newList->str)
		{
			free(newList);
			return (NULL);
		}
		newList->len = strlen(newList->str);
	}

	newList->next = (struct list_s *) *head;
	*head = newList;


	return (newList);
}
