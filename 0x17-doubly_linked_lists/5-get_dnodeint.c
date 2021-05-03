#include "lists.h"

/**
 *free_dlistint2 - free the dlistint
 *@head: the dlistint to free
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
