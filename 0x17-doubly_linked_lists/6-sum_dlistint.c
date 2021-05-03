#include "lists.h"
/**
 * sum_dlistint - sum of a linked list
 * @head: dlistint_t
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
