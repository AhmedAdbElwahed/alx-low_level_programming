#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: a pointer that points to first element in the list.
 * Return: if the list is empty, return 0. the sum of the values in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
