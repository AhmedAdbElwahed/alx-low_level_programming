#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 *@head: a pointer that points to first element in the list.
 */
void free_list(list_t *head)
{
	list_t *tmp
	;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}