#include "lists.h"
/**
 * sum_listint - sum of a linked list
 * @head: listint_t
 * Return: integer
 */
int sum_listint(listint_t *head)
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
